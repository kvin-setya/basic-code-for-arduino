#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);
#define SCREEN_ADDRESS 0x3C

char message[] = "Kelas Blynk Kelompok E - Indobot Academy";
int x, minX;

void setup() {
  Serial.begin(9600);
  //display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Serial.println("OLED FeatherWing test");
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;  // Don't proceed, loop forever
  }
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setTextWrap(false);
  x = display.width();
  minX = -12 * strlen(message);  // 12 = 6 pixels/character * text size 2
}

void loop() {

  display.clearDisplay();
  display.setCursor(x, 0);
  display.setTextSize(2);
  display.print("Kevin Setya Nugraha");
  display.setTextSize(2);
  display.setCursor(x, 23);
  display.print(message);
  display.setCursor(x, 46);
  display.setTextSize(2);
  display.print("Universitas Global Jakarta");
  display.display();
  x = x - 2;  // scroll speed, make more positive to slow down the scroll
  if (x < minX) x = display.width();
}
