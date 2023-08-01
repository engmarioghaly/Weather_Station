#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define LCD_ADDRESS 0x3F 
#define LCD_ROWS 4
#define LCD_COLS 20

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLS, LCD_ROWS);

void lcd_setup() {
  lcd.init();
  lcd.backlight();
}

void lcd_clear() {
  lcd.clear();
}

void lcd_print(int row, int col, const char* text) {
  lcd.setCursor(col, row);
  lcd.print(text);
}
void set_current_screen (String s)
{
  
}
