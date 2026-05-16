#ifndef __BEEP_H
#define __BEEP_H	 
#include "sys.h"
#include "delay.h"

#define beep PCout(13)// PC13

void BEEP_Init(void);//报警IO口初始化
void alarm(void);        //报警函数
		 				    
#endif
