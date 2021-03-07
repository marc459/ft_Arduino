#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.begin();                      
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Linea 1");
  lcd.setCursor(0, 1);
  lcd.print("Linea 2");
  delay(2500);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  

}
