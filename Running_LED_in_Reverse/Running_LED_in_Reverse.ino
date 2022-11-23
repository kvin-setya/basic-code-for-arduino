int LED[] = {D0, D1, D2, D3};
void setup() {
  for (int i = 0; i <= 3; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED[i], HIGH);
    delay(200);

    digitalWrite(LED[i], LOW);
  }
  
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED[i], LOW);
    delay(50);
  }

  for (int i = 3; i >= 0; i--) {
    digitalWrite(LED[i], HIGH);
    delay(200);
    digitalWrite(LED[i], LOW);
  }

  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED[i], LOW);
    delay(50);
  }
}
