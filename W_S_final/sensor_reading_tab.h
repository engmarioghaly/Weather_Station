#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085.h>
#include <DHT.h>

#define DHT_PIN 12
#define DHT_TYPE DHT11

Adafruit_BMP085 bmp;
DHT dht(DHT_PIN, DHT_TYPE);

float temp_c;
float humidity;
float pressure_pa;
int light_level;
boolean motion_detected;
boolean rain_detected;

void sensor_reading_setup() {
  bmp.begin();
  dht.begin();
  
  pinMode(PIR_PIN, INPUT);
  pinMode(RAIN_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void read_sensor_data() {
  // Read temperature and humidity data from DHT sensor
  temp_c = dht.readTemperature();
  humidity = dht.readHumidity();

  // Read barometric pressure data from BMP sensor
  pressure_pa = bmp.readPressure();

  // TODO: Implement light level, motion detection, and rain detection
  
}

int get_light_level() {
  // TODO: Implement light level measurement
  return 0;
}

boolean is_motion_detected() {
  // TODO: Implement motion detection
  return false;
}

boolean is_rain_detected() {
  // TODO: Implement rain detection
  return false;
}