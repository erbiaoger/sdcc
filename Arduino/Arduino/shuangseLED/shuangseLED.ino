// const int redPin = 9;    // 红色LED连接到数字引脚9
// const int greenPin = 10; // 绿色LED连接到数字引脚10

// void setup() {
//   pinMode(redPin, OUTPUT);   // 将红色引脚设置为输出模式
//   pinMode(greenPin, OUTPUT); // 将绿色引脚设置为输出模式
// }

// void loop() {
//   digitalWrite(redPin, HIGH);   // 点亮红色LED
//   digitalWrite(greenPin, LOW);  // 关闭绿色LED
//   delay(1000);                  // 等待1秒钟

//   digitalWrite(redPin, LOW);    // 关闭红色LED
//   digitalWrite(greenPin, HIGH); // 点亮绿色LED
//   delay(1000);                  // 等待1秒钟
// }

const int redPin = 1;
const int greenPin = 7;
int val = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  for (val = 255; val > 0; val--)
  {
    analogWrite(redPin, val);
    analogWrite(greenPin, 255-val);
    Serial.println(val, DEC);
    delay(10);
  }
    for (val = 0; val < 255; val++)
  {
    analogWrite(redPin, val);
    analogWrite(greenPin, 255-val);
    Serial.println(val, DEC);
    delay(10);
  }

}