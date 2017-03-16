void setup() {
  // 初始化引脚
  for (int i = 2; i < 14; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // 全亮测试
  for (int i = 2; i < 14; i++)
  {
    digitalWrite(i, LOW);
  }
  // 延时
  delay(5000);
  // 全灭后再流水灯测试
  for (int i = 2; i < 14; i++)
  {
    digitalWrite(i, HIGH);
  }
  // 流水灯测试
  for (char i = 13; i >= 10; i--)
  {
    digitalWrite(i, LOW);
    for (char t = 2; t < 10; t++)
    {
      digitalWrite(t, LOW );
      delay(500);
      digitalWrite(t, HIGH );
    }
    digitalWrite(i, HIGH);
  }
}
