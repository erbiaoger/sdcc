/*********************************************
 * 湖南创乐博智能科技有限公司
 * name:Joystick PS2
 * function:push the joystick and the coordinates of X and Y axes displayed on Serial Monitor will change accordingly; 
 * press down the joystick, and the coordinate of Z=0 will also be displayed.
 connection:
 Joystick PS2                 Arduino Uno R3
 GND	                      GND
 VCC	                      5V
 SW	                      7
 x	                      A0
 y	                      A1
 ***********************************************/

const int xPin = A0;     //X attach to A0
const int yPin = A1;     //Y attach to A1
const int btPin = 7;     //Bt attach to digital 7
const int redPin = 8;
const int greenPin = 9;

void setup()
{
  pinMode(btPin,INPUT); //set btpin as INPUT
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  digitalWrite(btPin, HIGH); //and HIGH
  Serial.begin(9600); //initialize serial
}

void loop()
{
  Serial.print("X: ");//print "X: "
  Serial.print(analogRead(xPin),DEC); //read the value of A0 and print it in decimal
  Serial.print("\tY: "); //print "Y: "
  Serial.print(analogRead(yPin),DEC); //read the value of A1 and print it in decimal
  Serial.print("\tZ: "); //print "Z: "
  Serial.println(digitalRead(btPin)); ////read the value of pin7 and print it
  delay(100);//delay 100ms
  if (analogRead(xPin) < 522)
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  else
  {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }


}

