#define led D2

unsigned long previousMillis = 0;
const long interval = 1000;
unsigned long previousMillis2 = 0;
const long interval2 = 2000;
unsigned long previousMillis3 = 0;
const long interval3 = 5000;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  while (1) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      Serial.println("aku dicetak setiap 1 detik sekali");
      digitalWrite(led, HIGH);
    }

    if (currentMillis - previousMillis2 >= interval2) {
      previousMillis2 = currentMillis;
      Serial.println("aku dicetak setiap 2 detik sekali");
    }

    if (currentMillis - previousMillis3 >= interval3) {
      previousMillis3 = currentMillis;
      Serial.println("aku dicetak setiap 3 detik sekali");
    }
    
    if (currentMillis == 10000) {
      break;
    }
  }
  ESP.deepSleep(30e6);
}
