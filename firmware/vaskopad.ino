#include <Keyboard.h>

const int KEY1 = 0;
const int KEY2 = 1;
const int KEY3 = 2;

void setup() {
  pinMode(KEY1, INPUT_PULLUP);
  pinMode(KEY2, INPUT_PULLUP);
  pinMode(KEY3, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(KEY1) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
  }

  if (digitalRead(KEY2) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
  }

  if (digitalRead(KEY3) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('z');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
  }
}
