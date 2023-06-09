/*-----------------------------------------------
  名称：IO口高低电平控制
  论坛：www.doflye.net
  编写：shifang
  日期：2009.5
  修改：无
  内容：点亮P1口的多个LED灯
        该程序是单片机学习中最简单最基础的，
		通过程序了解如何控制端口的高低电平
------------------------------------------------*/
#include<reg52.h> //包含头文件，一般情况不需要改动，
                  //头文件包含特殊功能寄存器的定义

sbit LED0=P1^0;// 用sbit 关键字 定义 LED到P1.0端口，
sbit LED1=P1^1;//LED是自己任意定义且容易记忆的符号
sbit LED2=P1^2;
sbit LED3=P1^3;
sbit LED4=P1^4;
sbit LED5=P1^5;
sbit LED6=P1^6;
sbit LED7=P1^7;
/*------------------------------------------------
                    主函数
------------------------------------------------*/
void main (void)
{
                  //此方法使用bit位对单个端口赋值
LED0=0;            //将P1.0口赋值 0，对外输出低电平
LED1=1;
LED2=0;
LED3=1;
LED4=0;
LED5=1;
LED6=0;
LED7=1;
while (1)         //主循环
  {
                  //主循环中添加其他需要一直工作的程序
  }
}