int reedsensor = D3;
int LED = D2;
int state;
void setup() {
  Serial.begin(115200);
  pinMode(reedsensor, INPUT); // must use pull up resistor / pull down resistor
  // use this for the simpler one
  // pinMode(reedsensor, INPUT_PULLUP); 
  pinMode(LED, OUTPUT);
}

void loop() {
  state = digitalRead(reedsensor);
  Serial.print(sinyal);
  if (state == 1) {
    digitalWrite(LED, LOW);
  }
  else {
    digitalWrite(LED, HIGH);
  }
  delay(1000);
}
