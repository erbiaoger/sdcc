const int sigPin = 7;
const int ledPin = 13;
const int led1Pin = 8;

void setup() {
  pinMode(sigPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(led1Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  boolean sigState = digitalRead(sigPin);
  Serial.println(sigState);
  if (sigState == HIGH) {
    digitalWrite(ledPin, LOW);
    digitalWrite(led1Pin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
    digitalWrite(led1Pin, HIGH);
  }
}
