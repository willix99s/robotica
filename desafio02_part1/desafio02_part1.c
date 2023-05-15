#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void rezinha(void){
  SetMotor(1,50);
  SetMotor(4,50);
  SetWaitForTime(1);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void spin(void){
  SetMotor(1,-50);
  SetMotor(4,50);
  SetWaitForTime(1);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void back(void){
  SetMotor(1,-100);
  SetMotor(4,-100);
  SetWaitForTime(3);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void front(void){
  SetMotor(1,-100);
  SetMotor(4,-100);
  SetWaitForTime(2.8);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void task1(void){
  front();
  rezinha();
  spin();
  back();
}
