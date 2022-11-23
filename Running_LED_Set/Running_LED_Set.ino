int LED[] = {D0, D1, D2, D3};

void setup() {
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
}

void loop() {
  //set the led's condition by changing the 0 and 1
  setLED(1, 0, 1, 0);
  setLED(0, 1, 0, 1);
  setLED(1, 1, 1, 1);
  setLED(0, 0, 0, 0);
}

//this function will change the condition to the set value before
int setLED (int nilai1, int nilai2, int nilai3, int nilai4) {
  digitalWrite(LED[0], nilai1);
  digitalWrite(LED[1], nilai2);
  digitalWrite(LED[2], nilai3);
  digitalWrite(LED[3], nilai4);
  delay(1000);
}
