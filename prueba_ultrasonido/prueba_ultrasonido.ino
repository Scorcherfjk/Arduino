#include <NewPing.h>
#define TRIGGER_PIN  7
#define ECHO_PIN     6
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

#include <LiquidCrystal_I2C.h> // Libreria LCD_I2C
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() { 

  float p = sonar.ping_cm();
  lcd.setCursor(0,0);
  lcd.print("DIST: ");
  lcd.print(p);
  lcd.print("cm");
  delay(1000);
}
