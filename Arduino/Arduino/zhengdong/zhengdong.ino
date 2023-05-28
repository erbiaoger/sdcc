const int sigPin = 7;
const int led1Pin = 8;

void setup() {
  pinMode(sigPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  boolean Value = digitalRead(sigPin);
  if (Value == LOW)
    digitalWrite(led1Pin, LOW);
  else
    digitalWrite(led1Pin, HIGH);

}
