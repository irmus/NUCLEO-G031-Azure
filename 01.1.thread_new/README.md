# 01.1.thread_new
Thread 생성 코드 조각

Thread를 만들기 위해서는 아래와 같은 작업 필요

1. thread 객체를 담을 변수와 thread body function prototype 선언
1. stack memory를 할당받는다
1. ```tx_thread_create()```를 호출해 새로운 thread instance를 생성한다.
1. thread body 함수 작성

## 주요 API

```
UINT       tx_thread_create(TX_THREAD *thread_ptr,
              CHAR *name_ptr,
              VOID (*entry_function)(ULONG), ULONG entry_input,
              VOID *stack_start, ULONG stack_size,
              UINT priority, UINT preempt_threshold,
              ULONG time_slice, UINT auto_start);
```

## 주요 파일

* [Core/Src/app_thread.c](Core/Src/app_threadx.c)
  * Stack memory를 할당받고 thread 생성
  * STM32CubeMx에서 생성된 파일
* [app/blinky.c](app/blinky.c)
  * Thread body
  * 500 ms delay를 통해 1초 주기의 LED 점멸을 구현한다.
* [app/blinky.h](app/blinky.h)
  * Header for thread body

## 참조 파일
* [Middlewares/ST/threadx/common/src/txe_thread_create.c](Middlewares/ST/threadx/common/src/txe_thread_create.c)
  * tx_thread_create() 구현

## 실행 결과
Nucleo 보드에 실장된 녹색 LED가 1초 주기로 점멸한다.
