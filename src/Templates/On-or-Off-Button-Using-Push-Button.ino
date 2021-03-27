#define btn 7
#define led 10 

bool light = false;

void setup()
{
  	pinMode(led, OUTPUT);
  	pinMode(btn, INPUT_PULLUP);
  	Serial.begin(9600);
}

void loop()
{
  	int ditekan = digitalRead(btn);
  
  	// digitalWrite(blue, LOW);
  	// digitalWrite(red, LOW);
  	// Serial.print("ditekan: ");
    // Serial.println(ditekan);
  
  if (ditekan == LOW) {
    Serial.print("light: ");
    Serial.println(light);
    
    if (light == true) {
     digitalWrite(led, HIGH);
     light = not light;
    }else {
     digitalWrite(led, LOW);	
      light = not light;
    }
  }

}
