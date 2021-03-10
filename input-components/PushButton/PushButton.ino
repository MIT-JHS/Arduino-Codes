int Button = 7;
int RedLight = 8;

void setup(){
    pinMode(RedLight, OUTPUT);
    pinMode(Button, INPUT);
}

void loop(){
    int buttonStat = digitalRead(Button);
    if (buttonStat == HIGH){
      digitalWrite(RedLight, HIGH);
    }else{
      digitalWrite(RedLight, LOW);
    }
}
