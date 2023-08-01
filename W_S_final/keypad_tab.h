#include <Keypad.h>

#define KEYPAD_ROWS 4
#define KEYPAD_COLS 4

char password[4] = {'1', '2', '3', '4'};
char input[4];
int input_index = 0;

const byte keypad_rows[KEYPAD_ROWS] = {7, 6, 5, 4};
const byte keypad_cols[KEYPAD_COLS] = {10, 9, 8, 3};
char key [KEYPAD_ROWS][KEYPAD_COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
Keypad keypad(makeKeymap(key), keypad_rows, keypad_cols, KEYPAD_ROWS, KEYPAD_COLS);

void keypad_setup() {
  keypad.setDebounceTime(50);
}
boolean check_password() {
  for (int i = 0; i < 4; i++) {
    if (input[i] != password[i]) {
      return false;
    }
  }
  return true;
}

void keypad_loop() {
  char key = keypad.getKey();
  
  if (key != '\0') {
    if (input_index < 4) {
      input[input_index++] = key;
      
      if (input_index == 4) {
        if (check_password()) {
          set_current_screen("SCREEN_BLUETOOTH");
        } else {
          input_index = 0;
        }
      }
    }
  }
}

