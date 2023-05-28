#include <reg52.h>                     //52系列单片机头文件

#define uchar unsigned char

#define uint unsigned int 
uchar temp,num,num1;
sfr WDT_CONTR=0xe1;

sbit led1=P1^0;
sbit beep=P2^3;
void delay(uint z)
   {
         	uint x,y;
          	for(x=z;x>0;x--)
          		for(y=110;y>0;y--);	
   }

void delayms(uint xms)                                    

{

         uint i,j;

         for(i=xms;i>0;i--)                         //i=xms即延时约xms毫秒

                  for(j=110;j>0;j--);

}

void main()

{

      
        WDT_CONTR=0x35;

         led1=0;

         delayms(500);

          led1=1;       
      
	       beep=0;
			 delayms(100);
			 beep=1;
          delayms(100);
			 
         while(1) 

       {
                  delayms(1000);

            WDT_CONTR=0x35;
              	  

        }

         
}


