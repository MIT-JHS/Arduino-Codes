void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int gerak = digitalRead(4);
  
  /*if (gerak == HIGH) {
  	tone(13, 200);  
  }else {
    noTone(13);
  }*/
  
  for (int i = 500; i <= 2000; i++) {
   tone(13, i);
   delay(1);
  }
  
  for (int i = 2000; i >= 500; i--) {
   tone(13, i);
   delay(1);
  }

}
