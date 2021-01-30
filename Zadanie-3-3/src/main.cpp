#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
char rxBuff[32];
  int ValueA = 0, ValueB = 0;
  char operation [16];
  
void setup() {
lcd.begin(16, 2);
  lcd.print("Piotr Jaworski");
  Serial.begin(9600);
  delay(2000);
}
  void loop() {
Serial.readBytesUntil('\r', rxBuff, sizeof(rxBuff) - 1);

  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
}