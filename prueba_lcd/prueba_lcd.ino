#include <LiquidCrystal_I2C.h> // Libreria LCD_I2C
int led = 13;
LiquidCrystal_I2C lcd(0x27,16,2); // si no te sale con esta direccion  puedes usar (0x3f,16,2) || (0x27,16,2)  ||(0x20,16,2) 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("==> HOLA <=="); 
  lcd.setCursor (0,1);
  lcd.print("==> ARGIE <==");
  pinMode(led,OUTPUT);
}

void loop() { 

  digitalWrite(led,1);
  lcd.display();
  delay(500);
  digitalWrite(led,0);
  lcd.noDisplay();
  delay(500);
}
