const int sensorPin = 14;
const int led = 13;
 
void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin , INPUT);  //definir pin como entrada
  pinMode(led , OUTPUT);
}
 
void loop(){
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
 
  if (value == HIGH) {
      digitalWrite(led,HIGH);
      delay(500);
  }
  digitalWrite(led,LOW);
  delay(500);
}
