/*-----------------------------------------------
  名称：多位数码管动态扫描显示变化数据
  论坛：www.doflye.net
  编写：shifang
  日期：2009.5
  修改：无
  内容：多位数码管分别显示不同数字，这种扫描显示方式成为动态扫描，并不停变化赋值
------------------------------------------------*/
#include<reg52.h> //包含头文件，一般情况不需要改动，头文件包含特殊功能寄存器的定义

#define DataPort P0 //定义数据端口 程序中遇到DataPort 则用P0 替换
sbit LATCH1=P2^2;//定义锁存使能端口 段锁存
sbit LATCH2=P2^3;//                 位锁存

unsigned char code dofly_DuanMa[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};// 显示段码值0~9
unsigned char code dofly_WeiMa[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};//分别对应相应的数码管点亮,即位码
unsigned char TempData[8]; //存储显示值的全局变量
void Delay(unsigned int t); //函数声明
void Display(unsigned char FirstBit,unsigned char Num);
/*------------------------------------------------
                    主函数
------------------------------------------------*/
main()
{
 unsigned int numA=999,numB=0;
 unsigned int j;
 while(1)
      {
	   j++;
	   if(j==10)  //检测当前数值显示了一小段时间后，
            //需要显示的数值-1，实现数据显示的变化
	     {
		  j=0;
		  numB++;
		  if(numA>0)//用于显示0~999
		    numA--;
		  else
		    numA=999;
          if(numB==1000)
		    numB=0;
		 }
	   //递减的三位数码管，带消隐
       if(numA<100)
         TempData[0]=0;
	   else
	   	 TempData[0]=dofly_DuanMa[numA/100];//分解显示信息，
                          //如要显示68，则68/10=6  68%10=8  
	   if(numA<10)
	     TempData[1]=0;
	   else
	     TempData[1]=dofly_DuanMa[(numA%100)/10];
	   TempData[2]=dofly_DuanMa[(numA%100)%10];
       //中间2位数码管不显示，赋值0
       TempData[3]=0; 
	   TempData[4]=0; 
       //递增的三位数码管，带消隐
	   if(numB<100)
         TempData[5]=0;
	   else
	   	 TempData[5]=dofly_DuanMa[numB/100];//分解显示信息，
                          //如要显示68，则68/10=6  68%10=8  
	   if(numB<10)
	     TempData[6]=0;
	   else
	     TempData[6]=dofly_DuanMa[(numB%100)/10];
	   TempData[7]=dofly_DuanMa[(numB%100)%10];

	   Display(0,8);//从第一位显示，共显示8位
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
/*------------------------------------------------
 显示函数，用于动态扫描数码管
 输入参数 FirstBit 表示需要显示的第一位，如赋值2表示
 从第三个数码管开始显示
 如输入0表示从第一个显示。
 Num表示需要显示的位数，如需要显示99两位数值则该值输入2
------------------------------------------------*/
void Display(unsigned char FirstBit,unsigned char Num)
{
      unsigned char i;
	  
	  for(i=0;i<Num;i++)
	   { 
	   DataPort=0;   //清空数据，防止有交替重影
       LATCH1=1;     //段锁存
       LATCH1=0;

       DataPort=dofly_WeiMa[i+FirstBit]; //取位码 
       LATCH2=1;     //位锁存
       LATCH2=0;

       DataPort=TempData[i]; //取显示数据，段码
       LATCH1=1;     //段锁存
       LATCH1=0;
       
	   Delay(200); // 扫描间隙延时，时间太长会闪烁，
                   //太短会造成重影

       }

}