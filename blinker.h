#include <Arduino.h>
#include <Wire.h>

int blinker(int pin) {
  if (!pin) return 1;
  if (!Wire.hasPin(pin)) return 2;
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
}

int blinker(int pin, int num) {
  if (!pin) return 1;
  if (!Wire.hasPin(num)) return 2;
}

int blinker(int pin, int num, int len) {
  if (!pin) return 1;
  if (!Wire.hasPin(num)) return 2;
}
