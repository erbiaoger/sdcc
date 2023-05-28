#include <8052.h>

void Delay(unsigned int t); 

void main (void)
{
                  
unsigned char i;  
Delay(5000);
P1=0xfe;           
while (1)         
  {
 for(i=0;i<8;i++)  
  {
   Delay(50000);
   P1<<=1;
   P1=P1|0x01;     
  } 
  P1=0xfe;          

  }
}

void Delay(unsigned int t)
{

        while(--t);

}