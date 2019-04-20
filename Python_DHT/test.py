import RPi.GPIO as GPIO
#GPIO SETUP
led_down = 20
led_up = 16
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(led_down, GPIO.OUT)
GPIO.setup(led_up, GPIO.OUT)

#1F
GPIO.output(led_down, GPIO.HIGH)

#3F
GPIO.output(led_up, GPIO.HIGH)


