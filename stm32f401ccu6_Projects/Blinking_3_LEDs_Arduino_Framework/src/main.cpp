#include <Arduino.h>

void setup() {
  // Set pins as outputs
  pinMode(PA5, OUTPUT);   // LED1
  pinMode(PB6, OUTPUT);   // LED2
  pinMode(PC13, OUTPUT);  // LED3 (onboard on many boards)

  // Start with all LEDs off
  digitalWrite(PA5, LOW);
  digitalWrite(PB6, LOW);
  digitalWrite(PC13, HIGH); // For PC13 onboard LED, HIGH = OFF
}

void loop() {
  // Toggle LEDs
  digitalWrite(PA5, !digitalRead(PA5));
  digitalWrite(PB6, !digitalRead(PB6));
  digitalWrite(PC13, !digitalRead(PC13));

  delay(500); // wait 500 ms
}
