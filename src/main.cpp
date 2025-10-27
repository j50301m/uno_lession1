#include <Arduino.h>

#define LED_PIN 13
#define BUTTON_PIN 2


void toggleLED();

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}


void loop() {
  toggleLED();
}

void toggleLED() {
  bool pressed = digitalRead(BUTTON_PIN) == LOW;
  digitalWrite(LED_PIN, pressed ? HIGH : LOW);
}

