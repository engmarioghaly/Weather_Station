#define JOY_X A0
#define JOY_Y A1
#define JOY_SW 2

int joy_x_val;
int joy_y_val;

void joystick_setup() {
  pinMode(JOY_SW, INPUT_PULLUP);
}

void joystick_loop() {
  joy_x_val = analogRead(JOY_X);
  joy_y_val = analogRead(JOY_Y);
  
  // Check if joystick button is pressed
  if (digitalRead(JOY_SW) == LOW) {
    // TODO: handle button press
  }
}
