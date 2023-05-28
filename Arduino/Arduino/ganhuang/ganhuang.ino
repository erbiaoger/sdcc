const int sigPin = 7;
const int ledPin = 13;

void setup() {
  pinMode(sigPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  boolean Value = digitalRead(sigPin);
  if (Value == HIGH)
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);
}
