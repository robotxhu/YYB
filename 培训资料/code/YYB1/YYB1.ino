
#include "yybqm.h"
#define DELAY_US 15
int frame = 0, x = 0, y = 0, len = 0;
bool isHigh = false;

void led(const char  a);
void displays(const char  b[]/*,int len*/);
void DELAY(int ms);

void setup() {
  pinMode(A1, INPUT_PULLUP);
  pinMode(A0, INPUT);
  for (int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void frame_select() {
  DELAY(8);

  digitalRead(A0) == LOW ? frame ++  : frame = frame;
  frame > 2 ? frame = 0 : frame = frame;
}

void state() {
  DELAY(2);
  digitalWrite(A1, LOW);
}

void loop() {
  if (digitalRead(A1)) {
    Serial.println(digitalRead(A1));
    switch (frame) {
      case 0:
        len = sizeof(logo1) / sizeof(logo1[0]);
        displays(logo1);

        break;
      case 1:
        len = sizeof(logo2) / sizeof(logo2[0]);
        displays(logo2);

        break;
      case 2:
        len = sizeof(logo3) / sizeof(logo3[0]);
        displays(logo3);

        break;
      default:
        len = sizeof(logo1) / sizeof(logo1[0]);
        displays(logo1);
    }
  }
  state();
  frame_select();
}

void led(const char  a) {
  for (int i = 2; i < 10; i++) {
    digitalWrite(i, bitRead(a, 9 - i));
  }
}

void displays(const char  b[]) {
  if (digitalRead(A1) == HIGH) {
    delay(20);
    if (digitalRead(A1) == HIGH) {
      for (x = 0; x < len ; x += 4) {
        for (y = 3; y >= 0; y--) {
          led(pgm_read_byte(&(b[x - y + 3 ])));
          digitalWrite(y + 10, LOW);
          delayMicroseconds(DELAY_US);
          digitalWrite(y + 10, HIGH);
        }

      }
    }
  }

}
void DELAY(int ms) {
  while (ms--) {
    for (int i = 0; i < 330; i++) {}
  }
}




