#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void spin(void){
  SetMotor(1,50);
  SetMotor(4,-50);
  SetWaitForTime(1);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void rezinha(void){
  SetMotor(1,15);
  SetMotor(4,15);
  SetWaitForTime(7);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void front(void){
  SetMotor(1,-100);
  SetMotor(4,-100);
  SetWaitForTime(2);
  SetMotor(1,-50);
  SetMotor(4,-50);
  SetWaitForTime(1);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void task1(void){
  front();
  rezinha();
  spin();
  front();
}
