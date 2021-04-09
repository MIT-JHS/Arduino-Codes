#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h> // minus ke ground, + ke 5V, dan tengah ke A0

#define DHTPIN A0 // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 11

DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;

float DHT11_Temperature;

struct sensor_previous_data_union {
  float DHT11_Temperature;
  float DHT11_Humidity;
} sensor_previous_data;

void setup() {
  Serial.begin(9600);
  // Initialize device.
  dht.begin();
  Serial.println(F("DHTxx Unified Sensor Example"));
}

void loop() {
  sensors_event_t humidity;
  sensors_event_t temperature;


  // Get temperature event and print its value.
  dht.temperature().getEvent(&temperature);

  // Get humidity event and print its value.
  dht.humidity().getEvent(&humidity);

  if (isnan(temperature.temperature)) {
    Serial.println(F("Error reading temperature!"));
  }
  else {

    if (sensor_previous_data.DHT11_Temperature != temperature.temperature || (sensor_previous_data.DHT11_Humidity != humidity.relative_humidity && !isnan(humidity.relative_humidity))) {

      Serial.println("=================================================");
      Serial.print("event.temperature: ");
      Serial.println(temperature.temperature);
      Serial.print(F("Humidity: "));
      Serial.print(humidity.relative_humidity);
      Serial.println(F("%"));

      Serial.println("=================================================\n\n");

    }

    if (sensor_previous_data.DHT11_Temperature != temperature.temperature) {
      sensor_previous_data.DHT11_Temperature = temperature.temperature;
    }
  }


  
  if (isnan(humidity.relative_humidity)) {
    Serial.println(F("Error reading humidity!"));
  }
  else {
    if (sensor_previous_data.DHT11_Humidity != humidity.relative_humidity) {
      sensor_previous_data.DHT11_Humidity = humidity.relative_humidity;
    }
  }

  delay(1000);
}