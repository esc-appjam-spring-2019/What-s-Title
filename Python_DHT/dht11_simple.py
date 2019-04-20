import Python_DHT
import time
import RPi.GPIO as GPIO
import json
import datetime
import requests

sensor = Python_DHT.DHT11
pin = 4
humidity, temperature = Python_DHT.read_retry(sensor, pin)

#GPIO SETUP
flame = 0
channel = 21
GPIO.setmode(GPIO.BCM)
GPIO.setup(channel, GPIO.IN)

def callback(channel):
    global flame
    print("flame detected")
    flame = 1

GPIO.add_event_detect(channel, GPIO.BOTH, bouncetime=3000)  # let us know when the pin goes HIGH or LOW
GPIO.add_event_callback(channel, callback)  # assign function to GPIO PIN, Run function on change

while True:
    print("Temperature = "+str(temperature)+"C Humidity = "+str( humidity)+"%")
    result_dict = {'time':str(datetime.datetime.now()), 'temperature': str(temperature), 'humidity': str(humidity), 'flame':str(flame)}
    result_str = json.dumps(result_dict)
    requests.post('http://appjam-2019-spring.koreacentral.cloudapp.azure.com:8080/environment', data=result_str)
    time.sleep(10)
