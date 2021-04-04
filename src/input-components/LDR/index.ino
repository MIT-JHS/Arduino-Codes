#include <Arduino.h>
// #include <iostream>
// #include <sting>
#define LDR A1 // define adalah keyword konstanta, yg dimana anda tidak bisa mengganti nilainya | define is a keyword which is a constant variable

void setup()
{
  // B00000001
  /*
   * @params (int speed, config) https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
   */
	Serial.begin(9600); 
}

void loop()
{
  
  int intensitas = analogRead(LDR); // mengeluarkan nilai integer rentang 366 - 1018 | returns an integer value; 366 - 1018
	Serial.println(intensitas); // log out
}
