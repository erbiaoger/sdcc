#include <8052.h> // 引用头文件
 
 
#define ADDR0 P1_0
 
 
//========= 延时 ============
void delay_ms(unsigned int s){
 
    unsigned int x;
 
    for(s;s>0;s--){
        x = 98;
        while(x--);
    }
}
 
//================ 主函数 ===================
 
void main(){
 
    while(1){ //主循环

        ADDR0 = 0;
    
 
        delay_ms(150);
        ADDR0 = 1;
    
 
    }
}
