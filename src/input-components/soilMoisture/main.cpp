#include <Arduino.h>

void setup() {

  Serial.begin(9600);
}

void loop() {
    int soilMoisture = analogRead(A2);
    int soilMoisturePrecentage = map(soilMoisture, 1023, 200, 0, 100); // use map to make precentage of the sensor
    Serial.print("Soil Moisture: ");
    Serial.print(soilMoisturePrecentage);
    Serial.println();
}
