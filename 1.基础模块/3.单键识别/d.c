#include <8052.h>

void delay(){
  for (unsigned int i = 0; i < 500; i++);
}


void main(){

  while(1){
    P1 = 0xff;
    P1 = P3;
    delay();
  }

}
