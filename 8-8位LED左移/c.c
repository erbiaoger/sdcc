#include <8052.h>

void Delay(unsigned int i){
  while(--i);
}

void main(){
  while(1){
  P1 = 0xff;
    unsigned char i;
    for (i = 0; i < 8; i++){
      P1<<=1;
      Delay(50000);
    }
  }
}
