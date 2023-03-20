//4*4键盘检测程序,按下键后相应的代码显示在数码管上
#include<reg51.h>
sbit beep=P2^3;
sbit dula=P2^6;
sbit wela=P2^7;
         unsigned char i=100;
unsigned char j,k,temp,key;
void delay(unsigned char i)
{
  for(j=i;j>0;j--)
    for(k=125;k>0;k--);
}
unsigned char code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
                        0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
display(unsigned char num)
{
         P0=table[num];
   //    P0=0xff;
         dula=1;
         dula=0;
         P0=0xc0;
         wela=1;
         wela=0;
}
void main()
{
  dula=0;
  wela=0;
  while(1)
  {
    P3=0xfe;
    temp=P3;
    temp=temp&0xf0;
    if(temp!=0xf0)
    {
      delay(10);
      if(temp!=0xf0)
      {
        temp=P3;
        switch(temp)
        {
          case 0xee:
               key=0;
               break;

          case 0xde:
               key=1;
               break;

          case 0xbe:
               key=2;
               break;

          case 0x7e:
               key=3;
               break;
         }
         while(temp!=0xf0)
         {
           temp=P3;
           temp=temp&0xf0;
           beep=0;
         }
         beep=1;
        display(key);
        // P0=table[key];
 /*        P0=0xff;
         dula=1;

         while(i--);
         dula=0;
         P0=0xc0;
         wela=1;
         wela=0;
  dula=0;
  wela=0;
  P0=0xff;
  dula=1;
  dula=0;
  P0=0xc5;
  wela=1;
  wela=0; */
         P1=0xfe;
      }
    }
    P3=0xfd;
    temp=P3;
    temp=temp&0xf0;
    if(temp!=0xf0)
    {
      delay(10);
      if(temp!=0xf0)
      {
        temp=P3;
        switch(temp)
        {
          case 0xed:
               key=4;
               break;

          case 0xdd:
               key=5;
               break;

          case 0xbd:
               key=6;
               break;

          case 0x7d:
               key=7;
               break;
         }
         while(temp!=0xf0)
         {
           temp=P3;
           temp=temp&0xf0;
           beep=0;
         }
         beep=1;
         display(key);
/*         P0=table[key];
         dula=1;
      //   while(100--);
         dula=0;
         P0=0xc0;
         wela=1;
         wela=0;
  */       P1=0xfc;
      }
      }
    P3=0xfb;
    temp=P3;
    temp=temp&0xf0;
    if(temp!=0xf0)
    {
      delay(10);
      if(temp!=0xf0)
      {
        temp=P3;
        switch(temp)
        {
          case 0xeb:
               key=8;
               break;

          case 0xdb:
               key=9;
               break;

          case 0xbb:
               key=10;
               break;

          case 0x7b:
               key=11;
               break;
         }
         while(temp!=0xf0)
         {
           temp=P3;
           temp=temp&0xf0;
           beep=0;
         }
         beep=1;
        display(key);
     /*    P0=table[key];
         dula=1;
      //   while(100--);
         dula=0;
         P0=0xc0;
         wela=1;
         wela=0;
    */     P1=0xf8;
      }
      }
    P3=0xf7;
    temp=P3;
    temp=temp&0xf0;
    if(temp!=0xf0)
    {
      delay(10);
      if(temp!=0xf0)
      {
        temp=P3;
        switch(temp)
        {
          case 0xe7:
               key=12;
               break;

          case 0xd7:
               key=13;
               break;

          case 0xb7:
               key=14;
               break;

          case 0x77:
               key=15;
               break;
         }
         while(temp!=0xf0)
         {
           temp=P3;
           temp=temp&0xf0;
           beep=0;
         }
         beep=1;
        display(key);
  /*       P0=table[key];
         dula=1;
   //      while(100--);
         dula=0;
         P0=0xc0;
         wela=1;
         wela=0;
    */     P1=0xf0;
      }
    }
  }
}
