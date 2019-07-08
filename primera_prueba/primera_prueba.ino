int verde = 13;
int azul = 8;
int rojo = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);
  pinMode(azul,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(azul,1);
  digitalWrite(verde,0);
  digitalWrite(rojo,0);
  delay(1000);
  digitalWrite(azul,0);
  digitalWrite(verde,1);
  digitalWrite(rojo,0);
  delay(1000);
  digitalWrite(azul,0);
  digitalWrite(verde,0);
  digitalWrite(rojo,1);
  delay(1000);
}
