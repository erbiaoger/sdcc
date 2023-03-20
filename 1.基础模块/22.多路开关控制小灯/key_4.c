
#include <reg51.H> 

sbit P3_4=P3^4;
sbit P3_5=P3^5;
sbit P3_6=P3^6;
sbit P3_7=P3^7;

sbit P1_0=P1^0;
sbit P1_1=P1^1;
sbit P1_2=P1^2;
sbit P1_3=P1^3;

void main(void) 


{ 


  while(1) 


    { 


      if(P3_4==0) 


        { 


          P1_0=0; 


        } 


        else 


          { 


            P1_0=1; 


          } 


      if(P3_5==0) 


        { 


          P1_1=0; 


        } 


        else 


          { 


            P1_1=1; 


          } 


      if(P3_6==0) 


        { 


          P1_2=0; 


        } 


        else 


          { 


            P1_2=1; 


          } 


      if(P3_7==0) 


        { 


          P1_3=0; 


        } 


        else 


          { 


            P1_3=1; 


          } 


    } 


}
