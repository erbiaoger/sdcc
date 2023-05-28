const int redPin = 7;
const int greenPin = 8;
const int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// void loop() {
//   digitalWrite(redPin, HIGH);
//   digitalWrite(greenPin, LOW);
//   digitalWrite(bluePin, LOW);
//   delay(1000);

//   digitalWrite(redPin, LOW);
//   digitalWrite(greenPin, HIGH);
//   digitalWrite(bluePin, LOW);
//   delay(1000);

//   digitalWrite(redPin, LOW);
//   digitalWrite(greenPin, LOW);
//   digitalWrite(bluePin, HIGH);
//   delay(1000);
// }


// void loop() {
//   color(0, 255, 255);
//   delay(1000);
//   color(255, 0, 255);
//   delay(1000);
//   color(255, 255, 0);
//   delay(1000);

// }

void loop() {
  color(255, 255, 255);
}


void color(unsigned char red, unsigned char green, unsigned char blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}