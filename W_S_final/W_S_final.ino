#include "lcd_tab.h"
#include "joystick_tab.h"
#include "keypad_tab.h"
#include "sensor_reading_tab.h"
#include "sensor_average_tab.h"
#include "about_us_tab.h"
#include "bluetooth_tab.h"

void setup() {
  lcd_setup();
  joystick_setup();
  keypad_setup();
  sensor_reading_setup();
  sensor_average_setup();
  about_us_setup();
  bluetooth_setup();
}

void loop() {
  // Check for user input from joystick or keypad
  joystick_loop();
  keypad_loop();

  // Update the current screen based on user input
  switch (current_screen) {
    case "SCREEN_SENSOR_READING":
      sensor_reading_loop();
      break;
    case "SCREEN_SENSOR_AVERAGE":
      sensor_average_loop();
      break;
    case "SCREEN_ABOUT_US":
      about_us_loop();
      break;
    case "SCREEN_BLUETOOTH":
      bluetooth_loop();
      break;
  }
}
