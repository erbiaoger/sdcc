#include <reg51.h>
#include <math.h>

unsigned char Bright_Level[8]={0,40,80,120,150,180,210,240};
unsigned char counter=0;
unsigned char code a[8]={0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81};
unsigned char code b[8]={0xc3,0x66,0x3c,0x18,0x18,0x3c,0x66,0xc3};
unsigned char code c[8]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};

void delay(unsigned int time)
{
 while(time--);
}

void flash1(unsigned int time)
{
 unsigned int counter=0;
 unsigned char i;
 for(i=0;i<8;i++)
 { 
  delay(time);
  P1=~a[counter++];
  counter%=8;
 } 
}

void flash2(unsigned int time)
{
 unsigned int counter=0;
 unsigned char i;
 for(i=0;i<8;i++)
 { 
  delay(time);
  P1=~b[counter++];
  counter%=8;
 } 
}

void flash3(unsigned int time)
{
 unsigned int counter=0;
 unsigned char i;
 for(i=0;i<8;i++)
 { 
  delay(5000);
  P1=~c[counter++];
  counter%=8;
 }
 counter=0;
 for(i=0;i<8;i++)
 { 
  delay(5000);
  P1=~c[7-counter++];
  counter%=8;
 }
}

/*************************
Timer 0 定时中断处理
**************************/ //timer init
void initTimer(void)
{
 TMOD=0x01;
 TH0=0xff;
 TL0=0xff-46;
 TR0=1;
 ET0=1;
 EA=1;
} //timer0/counter0 interrupt

void timer0(void) interrupt 1
{
 unsigned char i;
 TR0=0;
 TH0=0xff;
 TL0=0xff-46;

 counter++;
 for(i=0;i<8;i++)
 {
  if(counter>Bright_Level[i]) P1|=(1<<i);
  else P1&=~(1<<i);
 } 
 TR0=1;
}

void main()
{
 int i,j;
 unsigned char temp;
 

 for(j=0;j<5;j++)
 {
  temp=0x01;
  for(i=0;i<8;i++)
  {
   temp<<=1;
   P1=~temp;
   delay(20000);
  }
 }


initTimer();
 for(j=0;j<4;j++)
 {
  temp=Bright_Level[0];
  for(i=0;i<7;i++)
  {
   Bright_Level[i]=Bright_Level[i+1];
   delay(500);
  }
  Bright_Level[7]=temp;
  delay(500);
 }
 
 for(i=0;i<8;i++)
 {
  Bright_Level[i]=0x00;
 }

 delay(30000);

for(j=0;j<5;j++)
{
 for(i=0;i<255;i++)
 {
  Bright_Level[3]=Bright_Level[4]=i;
  delay(50);
 }
 for(i=255;i>0;i--)
 {
  Bright_Level[3]=Bright_Level[4]=i;
  delay(50);
 }

  for(i=0;i<255;i++)
 {
  Bright_Level[2]=Bright_Level[5]=i;
  delay(50);
 }
 for(i=255;i>0;i--)
 {
  Bright_Level[2]=Bright_Level[5]=i;
  delay(50);
 }

 for(i=0;i<255;i++)
 {
  Bright_Level[1]=Bright_Level[6]=i;
  delay(50);
 }
 for(i=255;i>0;i--)
 {
  Bright_Level[1]=Bright_Level[6]=i;
  delay(50);
 }

 for(i=0;i<255;i++)
 {
  Bright_Level[0]=Bright_Level[7]=i;
  delay(50);
 }
 for(i=255;i>0;i--)
 {
  Bright_Level[0]=Bright_Level[7]=i;
  delay(50);
 }
 }

 EA=0;

 for(i=0;i<256;i++)
 {
  P1=~i;
  delay(10000);
 }

 delay(10000);
 for(j=0;j<4;j++)
 {
 flash1(60000);
 flash2(60000);
 flash3(60000);
 }
 while(1);
} 
