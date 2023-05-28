const int keyPin = 7;
const int ledPin = 13;

void setup() {
  pinMode(keyPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  boolean Value = digitalRead(keyPin);
  if (Value == HIGH)
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);
  
}