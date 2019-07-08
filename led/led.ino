const int boton = 7;
const int led = 13;

void setup() {
  Serial.begin(9600);
   pinMode(boton, INPUT);
   pinMode(led, OUTPUT);
}
 
void loop() {
  int value= digitalRead(boton);
   if(value == HIGH){
      digitalWrite(led,HIGH);
   }
  else{
    digitalWrite(led,LOW);
  }
  

}
