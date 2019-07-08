#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal_I2C.h> // Libreria LCD_I2C
#define DHTPIN 14
#define DHTTYPE DHT11
LiquidCrystal_I2C lcd(0x27,16,2);
DHT dht(DHTPIN, DHTTYPE);
const int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() { 

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("TEMP: ");
  lcd.print(t);
  if(t < 20.00 || t > 28.00){
    digitalWrite(led, HIGH);
  }
  lcd.print(" C'");
  lcd.setCursor (0,1);
  lcd.print("HUME: ");
  lcd.print(h);
  lcd.print(" %");
  delay(1500);
  digitalWrite(led, LOW);
  delay(1000);
}
