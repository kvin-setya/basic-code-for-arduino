//the led will turn on alternately from led1 to led 4
//define pin GPIO for LED, adjust it with the available pin on your board
#define pinLED1 12
#define pinLED2 13
#define pinLED3 14
#define pinLED4 15

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
}

void loop()
{
  //light up alternately

  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  delay(1000);
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  delay(1000);
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, LOW);
  delay(1000);
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, HIGH);
  delay(1000);
}
