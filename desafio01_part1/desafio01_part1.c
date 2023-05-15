#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void spinRIGHT(void){
  SetMotor(1,-15);
  SetMotor(4,15);
  SetWaitForTime(0.7);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void back(void){
  SetMotor(1,50);
  SetMotor(4,50);
  SetWaitForTime(3);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void front(void){
  SetMotor(1,-50);
  SetMotor(4,-50);
  SetWaitForTime(3);
  SetMotor(1,0);
  SetMotor(4,0);
  }

 void alavancaUP(void){
  SetMotor(2,-20);
  SetWaitForTime(1);
  SetMotor(2,0);
  }

 void alavancaDOWN(void){
  SetMotor(2,20);
  SetWaitForTime(1);
  SetMotor(2,0);
  }

 void task1(void){
  alavancaDOWN();
  front();
  back();
  spinRIGHT();
  front();
}
