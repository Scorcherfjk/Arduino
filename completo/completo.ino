#include <NewPing.h>
#define TRIGGER_PIN  7
#define ECHO_PIN     6
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
const int led = 13;

#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 14
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

#include <LiquidCrystal_I2C.h> // Libreria LCD_I2C
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() { 
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float p = sonar.ping_cm();

  if(t < 20.00 || t > 26.00){
    digitalWrite(led, HIGH);
  }
  
  lcd.setCursor(0,0);
  lcd.print("DIST: ");
  lcd.print(p);
  lcd.print("cm");
  lcd.setCursor (0,1);
  lcd.print("T:");
  lcd.print(t);
  lcd.print(" H:");
  lcd.print(h);
  delay(1000);
}
