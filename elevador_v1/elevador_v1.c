#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void turn(void){
  SetMotor(1,-30);
  SetMotor(4,30);
  SetWaitForTime(0.2);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void back(void){
  SetMotor(1,50);
  SetMotor(4,50);
  SetWaitForTime(5);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void front(void){
  SetMotor(1,-30);
  SetMotor(4,-31);
  SetWaitForTime(12);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void task1(void){
  front();
  back();
  turn();
  back();
}
