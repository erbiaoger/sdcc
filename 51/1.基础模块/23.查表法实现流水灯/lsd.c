#include <AT89X51.H> 


unsigned char code table[]={0xfe,0xfd,0xfb,0xf7, 


                            0xef,0xdf,0xbf,0x7f, 


                            0xfe,0xfd,0xfb,0xf7, 


                            0xef,0xdf,0xbf,0x7f, 


                            0x7f,0xbf,0xdf,0xef, 


                            0xf7,0xfb,0xfd,0xfe, 


                            0x7f,0xbf,0xdf,0xef, 


                            0xf7,0xfb,0xfd,0xfe, 


                            0x00,0xff,0x00,0xff, 


                            0x01}; 


unsigned char i; 


  


void delay(void) 


{ 


  unsigned char m,n,s; 


  for(m=20;m>0;m--) 


  for(n=20;n>0;n--) 


  for(s=248;s>0;s--); 


} 


  


void main(void) 


{ 


  while(1) 


    { 


      if(table[i]!=0x01) 


        { 


          P1=table[i]; 


          i++; 


          delay(); 


        } 


        else 


          { 


            i=0; 


          } 


    } 


} 


