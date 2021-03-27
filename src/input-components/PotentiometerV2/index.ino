int potentiometer = A5;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int status = analogRead(A5);

  Serial.println(status); // rentang 0 - 1023
  delay(1000);
}