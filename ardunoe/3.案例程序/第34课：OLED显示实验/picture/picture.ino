// * 湖南创乐博智能科技有限公司
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>

#include "bitmap.h"
//#include "sensorManage.h"

#define uint8  unsigned char
#define uint16 unsigned int

#define OLED_RESET 8
Adafruit_SSD1306 display(OLED_RESET);

//constant define
#define PICTURE_GLCD_HEIGHT 64 
#define PICTURE_GLCD_WIDTH  128
#define BAR_Y 20
#define BAR_X 57
#define BAR_WIDTH 50

//pin define
#define photoPin A0

void setup()   
{  
    //----- by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
    display.begin(SSD1306_SWITCHCAPVCC, 0x3c);  // initialize with the I2C addr 0x3D (for the 128x64)
    display.clearDisplay();
}

void loop()
{
    //showLight();
    showLogo(0, 0);
}

void showLogo(uint8 x, uint8 y)
{
    display.clearDisplay();   // clears the screen and buffer
    display.drawBitmap(x, y,  logo_CLB, PICTURE_GLCD_WIDTH, PICTURE_GLCD_HEIGHT, 1);
    display.display();
}


