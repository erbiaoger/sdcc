/****************************************************
 *  * 湖南创乐博智能科技有限公司
name:IR Obstacle Avoidance Sensor
function:place a piece of paper in front of the Obstacle Avoidance Sensor,
and the LED attached to pin 13 on the Arduino Uno board will light up. 
******************************************************/

const int ledPin = 13;  //pin13 built-in led
const int avoidPin = 7;  //the ir obstacle sensor attach to pin 7

void setup()
{
  pinMode(ledPin, OUTPUT);  //set the ledPin as OUTPUT
  pinMode(avoidPin, INPUT);  //set the avoidPin as INPUT
}

void loop()
{
  boolean avoidVal = digitalRead(avoidPin);  //read the value of pin7
 
  if(avoidVal == LOW) //if the value is LOW level
  {
    digitalWrite(ledPin, HIGH);  //turn on the led
  }
  else  //else
  {
    digitalWrite(ledPin, LOW);  //turn off the led
  }
}
