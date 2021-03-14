int potentiometer = A0;
int led = A1;

void setup(){
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  int status = analogRead(potentiometer);
  analogWrite(led, status);
}