/*-----------------------------------------------
  名称：IO口高低电平控制
  论坛：www.doflye.net
  编写：shifang
  日期：2009.5
  修改：无
  内容：点亮P1口的1个LED灯闪烁
        该程序是单片机学习中最简单最基础的，
		通过程序了解如何控制端口的高低电平
------------------------------------------------*/
#include<reg52.h> //包含头文件，一般情况不需要改动，
                  //头文件包含特殊功能寄存器的定义

sbit LED0=P1^0;// 用sbit 关键字 定义 LED到P1.0端口，
               //LED是自己任意定义且容易记忆的符号


void Delay(unsigned int t); //函数声明
/*------------------------------------------------
                    主函数
------------------------------------------------*/
void main (void)
{
                  //此方法使用bit位对单个端口赋值
unsigned char i;  //定义一个无符号字符型局部变量 i 取值范围 0~255

while (1)         //主循环
  {
 for(i=0;i<10;i++)   //加入 for循环，表明for循环大括号中的程序循环执行10次
  {
  LED0=0;            //将P1.0口赋值 0，对外输出低电平
  Delay(5000);       //调用延时程序；更改延时数字可以更改延时长度；
                     //用于改变闪烁频率
  LED0=1;            //将P1.0口赋值 1，对外输出高电平
  Delay(5000);
  }

 for(i=0;i<10;i++)
  {
  LED0=0;            //将P1.0口赋值 0，对外输出低电平
  Delay(60000);      //调用延时程序；更改延时数字可以更改延时长度；
                     //用于改变闪烁频率
  LED0=1;            //将P1.0口赋值 1，对外输出高电平
  Delay(60000);      
 }
                     //主循环中添加其他需要一直工作的程序
 }
}
/*------------------------------------------------
 延时函数，含有输入参数 unsigned int t，无返回值
 unsigned int 是定义无符号整形变量，其值的范围是
 0~65535
------------------------------------------------*/
void Delay(unsigned int t)
{
 while(--t);
}
