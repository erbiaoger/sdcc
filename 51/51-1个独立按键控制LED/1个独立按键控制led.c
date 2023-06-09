/*-----------------------------------------------
  名称：单个独立按键检测
  论坛：www.doflye.net
  编写：shifang
  日期：2009.5
  修改：无
  内容：用于时刻检测按键状态并输出指示
------------------------------------------------*/
#include<reg52.h> //包含头文件，一般情况不需要改动，头文件包含特殊功能寄存器的定义

sbit KEY=P3^3;  //定义按键输入端口
sbit LED=P1^2;  //定义led输出端口

/*------------------------------------------------
                    主函数
------------------------------------------------*/
void main (void)
{
                  
KEY=1; //按键输入端口电平置高
while (1)         //主循环
  {

  if(!KEY)  //如果检测到低电平，说明按键按下
    LED=0;
  else
    LED=1;  //这里使用if判断，如果按键按下led点亮，否则熄灭
	        //上述4句可以用一句替代 LED=KEY;
                     //主循环中添加其他需要一直工作的程序
  }
}