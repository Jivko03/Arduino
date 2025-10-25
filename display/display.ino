#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();

  // Set text settings
  display.setTextSize(1);             // Try 1 or 2 depending on fit
  display.setTextColor(WHITE);
  display.setCursor(10, 25);          // X, Y position

  // Display the cute cat
  display.println("^._.^> ^_^ <( o.o )");     // Simple cat  // Kawaii cat
  display.display();
}

void loop() {
  // Nothing here
}
