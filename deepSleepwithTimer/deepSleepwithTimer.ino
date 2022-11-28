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
  //wake up from sleep, then do the task for 10 seconds
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
    //this procces will finish in 10 seconds
    if (currentMillis == 10000) {
      break;
    }
  }
  // after that, it start sleeping for 30 seconds
  // 30e6 means 30000000 microseconds, or simply 30 seconds
  ESP.deepSleep(30e6);
}
