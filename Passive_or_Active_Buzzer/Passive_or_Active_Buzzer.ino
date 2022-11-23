//This code is to test whether your buzzer is passive or active

//define GPIO pin for buzzer, adjust it with your board
#define pinBuzzer1 13
#define pinBuzzer2 14

void setup() {
  //set mode/role for each pin
  pinMode(pinBuzzer1, OUTPUT);
  pinMode(pinBuzzer2, OUTPUT);
}

void loop() {
  //if it's active buzzer, it will sound by this line of code
  digitalWrite(pinBuzzer1, HIGH);

  //if it's passive buzzer, it will sound by this line of code
  tone(pinBuzzer2, 700);  //you can adjust the number

  //you can try to plug in each pin alternately
}
