#include <8052.h>
void Delay(unsigned int t); 

void main (void)
{
                  
unsigned char i; 
Delay(50000);
P1=0xfe;          
for(i=0;i<8;i++)  
  {
   Delay(50000);
   P1<<=1;
   
  }
while (1)        
  {
                   
  }
}

void Delay(unsigned int t)
{
 while(--t);
}