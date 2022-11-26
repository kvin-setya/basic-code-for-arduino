#include <TM1637Display.h> // https://github.com/Seeed-Studio/Grove_4Digital_Display
#define CLK D5 
#define DIO D4
#define switchUpPin D7
#define switchDownPin D6
TM1637Display display(CLK, DIO);

int counter = 0;
int buttonUpState = 0;
int buttonDownState = 0;

void setup() {
  display.setBrightness(0x0f);
  pinMode(switchUpPin , INPUT_PULLUP);
  pinMode(switchDownPin, INPUT_PULLUP);
}
void loop() {
  buttonUpState = digitalRead(switchUpPin);
  buttonDownState = digitalRead(switchDownPin);

  if (buttonUpState == HIGH) {
    if (counter == 9999) {
      counter = 0;
    }
    else {
      counter++;
    }
  } else if (buttonDownState == HIGH) {
    if (counter == 0) {
      counter = 9999;
    }
    else {
      counter--;
    }
  }
  display.showNumberDec(counter);
  delay(200);
}
