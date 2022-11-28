// it must use pull down / up resistor for the switch / reed switch
unsigned long previousMillis = 0;
const long interval = 1000;
unsigned long previousMillis2 = 0;
const long interval2 = 2000;
unsigned long previousMillis3 = 0;
const long interval3 = 5000;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(" ");
  Serial.println("I wake up, am ready to do the tasks");
  while (1) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      Serial.println("I print this once in every second");
    }

    if (currentMillis - previousMillis2 >= interval2) {
      previousMillis2 = currentMillis;
      Serial.println("I print this once in every 2 second");
    }

    if (currentMillis - previousMillis3 >= interval3) {
      previousMillis3 = currentMillis;
      Serial.println("I print this once in every 5 second");
    }
    
    if (currentMillis == 10000) {
      break;
    }
  }
  Serial.println("I'm Going to sleep");
  ESP.deepSleep(0);
}
