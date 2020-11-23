#include <Arduino.h>
#define LED_BLUE 10
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
digitalWrite(LED_BLUE, LOW);
}

void loop() {
digitalWrite(LED_BLUE, HIGH);
delay(500);
digitalWrite(LED_BLUE, LOW);
delay(500);
}