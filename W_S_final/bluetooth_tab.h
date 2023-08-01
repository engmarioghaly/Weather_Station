#include <SoftwareSerial.h>

#define BT_TX_PIN 16
#define BT_RX_PIN 17

SoftwareSerial bt(BT_TX_PIN, BT_RX_PIN);

void bluetooth_setup() {
  bt.begin(9600);
}

void bluetooth_loop() {
  // TODO: Implement Bluetooth data transmission
}
void SCREEN_BLUETOOTH ()
{
  //todo
}
void send_sensor_data() {
  bt.print("Temperature: ");
  bt.println(temp_c);
  bt.print("Humidity: ");
  bt.println(humidity);
  bt.print("Pressure: ");
  bt.println(pressure_pa);
  bt.print("Light Level: ");
  bt.println(light_level);
}
