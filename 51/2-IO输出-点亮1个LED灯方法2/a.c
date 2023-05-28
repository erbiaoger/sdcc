#include <8052.h>

//#define P1 P2_0

void deploy(){
  unsigned int i;
  for (i = 0; i < 50000; i++);
}


void main (void)
{
  while(1){
    P1 = 0B11111111;
    deploy();
    P1 = 0B00000000;
    deploy();
  }
  /*
  while(1){
    P1 = 0xFF;
    deploy();
    P1 = 0xFE;
    deploy();
  }*/
}
