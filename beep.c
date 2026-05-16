#include "beep.h"
 

//初始化PB5和PE5为输出口.并使能这两个口的时钟		    
//LED IO初始化
void BEEP_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能PB,PE端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;				 //LED0-->PB.5 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIOB.5
 GPIO_ResetBits(GPIOC,GPIO_Pin_13);						 //PB.5 输出高
}
void alarm()
{
	int i;
		beep=0;
		delay_ms(300);	//延时300ms
	for(i=0;i<3;i++)
	{
    beep=1;
		delay_ms(100);	 //延时300ms
		beep=0;
		delay_ms(300);	//延时300ms
	}
}
 
