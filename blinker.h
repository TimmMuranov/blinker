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
  for (int x=0; x<num; ++x){
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500;
  }
}

int blinker(int pin, int num, int len1, int len2) {
  if (!pin) return 1;
  if (!Wire.hasPin(num)) return 2;
  for (int x=0; x<num; ++x){
    digitalWrite(pin, HIGH);
    delay(len1);
    digitalWrite(pin, LOW);
    delay(len2);
  }
}

int blinker(int pin, int num, int len1, int len2, bool rev) {
  if (!pin) return 1;
  if (!Wire.hasPin(num)) return 2;
  string h = "HIGH";
  string l = "LOW";
  
  if (rev){
    h = "LOW";
    l = "HIGH";
  }
  
  for (int x=0; x<num; ++x){
    digitalWrite(pin, h);
    delay(len1);
    digitalWrite(pin, l);
    delay(len2);
  }
}
