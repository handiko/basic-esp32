#include <Arduino.h>

#define IO2 2

void setup()
{
  // put your setup code here, to run once:
  pinMode(IO2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(IO2, HIGH);
  delay(500);
  digitalWrite(IO2, LOW);
  delay(800);
}