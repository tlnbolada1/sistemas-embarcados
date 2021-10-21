#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(1, 1);
}

void loop() {
  lcd.setCursor(1, 0);
  int voltage = analogRead(A0);
  lcd.print(voltage * (5.0 / 1023.0));  
}
 
