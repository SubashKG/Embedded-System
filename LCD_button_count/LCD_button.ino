#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int button = 2;
int count = 0;
int buttonState;
int lastButtonState = LOW;

void setup()
{
  pinMode(button, INPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Button Count");
}

void loop()
{
  buttonState = digitalRead(button);

  if(buttonState == HIGH && lastButtonState == LOW)
  {
    count++;

    lcd.setCursor(0,1);
    lcd.print("Count: ");
    lcd.print(count);

    delay(200);
  }

  lastButtonState = buttonState;
}