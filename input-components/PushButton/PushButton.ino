int button = 0;

void setup(){
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
}

void loop(){
  button = digitalRead(7);
  if (button == LOW){
  	digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }
}
