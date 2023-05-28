
const int keyPin = 7;
const int lPin = 8;

void setup() {
  pinMode(keyPin, INPUT);
  pinMode(lPin, OUTPUT);
}

void loop() {
  boolean Value = digitalRead(keyPin);
  if (Value == HIGH)
    digitalWrite(lPin, LOW);
  else
    digitalWrite(lPin, HIGH);
  
}