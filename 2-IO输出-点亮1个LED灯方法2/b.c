#include <8052.h>


void deploy(){
  unsigned int i;
  for (i = 0; i < 100000; i++);
}

void main(){
  
  P1 = 0x00;
  while(1){
    P1 = P1 << 1;
    deploy();
  }
}
