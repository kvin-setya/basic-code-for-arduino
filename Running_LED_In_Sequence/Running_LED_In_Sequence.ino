int LED[] = {D0, D1, D2, D3};
void setup() {
  //it will define the mode of each pin sequentially
  for (int i = 0; i <= 3; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  //this program will turn on the led sequentially, from led 1 to the last one
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED[i], HIGH);
    delay(1000);
  }
  //and vice versa
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED[i], LOW);
  }
}
