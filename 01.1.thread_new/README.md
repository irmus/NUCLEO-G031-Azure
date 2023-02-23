# 01.1.thread_new
Thread 생성 코드 조각

Thread를 만들기 위해서는 아래와 같은 작업 필요

1. thread 객체를 담을 변수와 thread body function prototype 선언
1. stack memory를 할당받는다
1. ```tx_thread_create()```를 호출해 새로운 thread instance를 생성한다.
1. thread body 함수 작성

## 주요 파일

* [Core/Src/app_thread.c](Core/Src/app_threadx.c)
  * Stack memory를 할당받고 thread 생성
  * STM32CubeMx에서 생성된 파일
* [app/blinky.c](app/blinky.c)
  * Thread body
* [app/blinky.h](app/blinky.h)
  * Header for thread body

## 실행 결과
Nucleo 보드에 실장된 녹색 LED가 1초 주기로 점멸한다.