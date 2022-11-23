int LED[] = {D0, D1, D2, D3};

void setup() {
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);

}

void loop() {
  int pin;
  pin = random(4);
  digitalWrite(LED[pin], HIGH);
  delay(100);
  digitalWrite(LED[pin], LOW);
}
