#include <Arduino.h>
#include <Keypad.h>

const int KEYPAD_ROWS = 6;
const int KEYPAD_COLUMNS = 6;

char keys[KEYPAD_ROWS][KEYPAD_COLUMNS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};


byte pin_rows[KEYPAD_ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte pin_column[KEYPAD_COLUMNS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, KEYPAD_ROWS, KEYPAD_COLUMNS );

void setup(){
  Serial.begin(9600);
}

void loop(){

    char key = keypad.getKey();

    Serial.print("user pressed: ");
    Serial.println(key);
}
