int ledPin = 13; // 设置LED连接的引脚

void setup() {
  pinMode(ledPin, OUTPUT); // 将LED引脚设置为输出模式
}

void loop() {
  digitalWrite(ledPin, HIGH); // 将LED引脚设置为高电平
  delay(1000); // 等待1秒钟
  digitalWrite(ledPin, LOW); // 将LED引脚设置为低电平
  delay(1000); // 等待1秒钟
}
