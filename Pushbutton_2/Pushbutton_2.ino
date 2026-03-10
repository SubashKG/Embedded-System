int button = 7;
int led = 13;

int ledState = LOW;
int buttonState;
int lastButtonState = LOW;

void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(button);

  if(buttonState == HIGH && lastButtonState == LOW)
  {
    ledState = !ledState;
    digitalWrite(led, ledState);
    delay(200);
  }

  lastButtonState = buttonState;
}