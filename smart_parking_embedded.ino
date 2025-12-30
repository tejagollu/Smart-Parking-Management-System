#include <LiquidCrystal.h>

// LCD Pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

// IR Sensor Pins
#define IR1 8
#define IR2 9

int totalSlots = 2;

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

  lcd.begin(16, 2);
  lcd.print("SMART PARKING");
  delay(2000);
  lcd.clear();
}

void loop() {
  int slot1 = digitalRead(IR1);
  int slot2 = digitalRead(IR2);

  int freeSlots = totalSlots;

  if (slot1 == LOW) freeSlots--;
  if (slot2 == LOW) freeSlots--;

  lcd.setCursor(0, 0);
  lcd.print("Total Slots: ");
  lcd.print(totalSlots);

  lcd.setCursor(0, 1);
  lcd.print("Free Slots: ");
  lcd.print(freeSlots);

  delay(1000);
}
