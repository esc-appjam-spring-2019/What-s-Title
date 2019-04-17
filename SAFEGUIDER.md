# 2019-Spring-Appjam-ESC

-----------------

## Topic Keyword

OLD: 늙은, 오래된



## OUR TOPIC

OLD PROBLEM: 오래된 문제 => **오래전부터 해결되지 않았던 사회문제 해결** 



## OUR PROJECT 

*Fire Prevention for high-building*: **고층 건물 화재 방지 시스템**

#### What are problems for fire on Past/Now?

- We don't know where is safe-zone when on fire in High-building.
  - 고층 건물에서 화재가 났을때 어디가 안전한 곳인지 알수가 없음
- Because of smoke, the front is invisible, and when a fire occurs, firefighters can not find people staying inside.
  - 연기 때문에 앞이 보이지 않아, 화재가 발생하면 소방관은 안에 머물러있는 사람들을 찾을 수 없습니다.
- Also, you can not hear the rescue request. So, they don't know there are people.
  - 또한 구조 요청을들을 수 없습니다. 그래서 그들은 사람들이 있다는 것을 모릅니다.



#### How to improve?

- *A1:* 비상유도등에 탈출 해야할 방향을 알려주는 유도등을 추가로 부착
  - ![emer](images\emer.png)
- *A2:* 블루투스 비콘 3개를 이용하여 현재 건물 내에서 어디에 사람이 있는지 알려줌
  - ![](images/Mylocation.png)
  - 이와 상황에서 **삼각측량법**을 이용하여 거리를 구할 수 있다.

##### 삼각 측량법이란?

![](images\won.png)

이와 같은 상황에서, 피타고라스 정리를 사용
$$
d1^2 =(x - x1)^2 + (y - y1)^2
$$
$$
d2^2 =(x - x2)^2 + (y - y2)^2
$$
$$
d3^2 =(x - x3)^2 + (y - y3)^2
$$

이 공식을 이용해서 x와 y의 좌표를 알아냄



> 아래의 모든 솔루션은 전부 4층짜리 건물을 기준으로 합니다. 또한 *만들어야할 층 수는 솔루션 뒤에 괄호로 보여집니다.*
>
> **Qt 디자인은 크기가 무조건 800x480이어야 합니다.**

## *A1:* 화재 대피 방향 가이드 Solution - 최순위

#### 임베디드(4층)

- 블루투스로 불난 층에서 +-1 층에 전송
- 불꽃 센서로 불난층 감지
- 서버로 전송

#### 서버(4층)

- 불난 층 감지해서 사용자 Qt/ 앱에 알려줌
- 불이 났다고 관리자 Qt에 알려줌

#### Qt

- 불난층 알려줌

#### 안드로이드

- 불난층 알려줌

#### 디자인

- 화재가 발생함을 알려주고, 불난층 몇층인지 알려줌(위험)  -  Qt와 안드로이드

## *A2:* 건물 내부에 사람이 있는지 감지 Solution - 후순위

- 먼저 사진을 보자.
- ![A2](C:\Users\itsmysurport\workspace\2019-Spring-Appjam\What-s-Title\images\A2.png)



#### 임베디드(A2)(1층)

- 블루투스 비콘과 사용자의 거리 알아내기 > 서버로 전송

#### 서버(A2)(1층)

- 삼각측량법을 이용하여 현재위치를 알아내고, Admin QT로 전송.
#### Qt(A2)(1층)

- 관리자 Qt에 setLocale을 이용한 사용자 위치 빨간점으로 나타내기

#### 안드로이드(A2)(1층)

- 구조요청 버튼 누를시 근처 블루투스에 연결/페어링

#### 디자인(A2)(1층)

- 불이 났을때 > 구조요청 화면으로 바뀜 > 그때 구조요청을 하시겠습니까? 라는 문구 띄워짐 (안드로이드) 
- 방 그림에 빨간점으로 구조자의 위치를 알 수 있음
  - ex) ![won](images\room.png)

## *A3:* 화재 예방 Solution

 #### 임베디드(A3)(1층)

- 온습도 센서로 현재 온습도를 측정 후 서버로 전송

#### 서버(A3)(1층)

- 안드로이드와 서버에 온습도 값을 보내줌

#### Qt(A3)(1층)

- 사용자 Qt에서 온도 습도 보여주기

#### 안드로이드(A3)(1층)

- 사용자 Qt에서 온도 습도 보여주기

#### 디자인(A3)(1층)

- 온도 습도 알려주고 상태 알려줌 (안드로이드, Qt)
  - QT EX)![list](images\list.png)

