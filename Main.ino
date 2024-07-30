#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 2
CRGB leds[NUM_LEDS];




void setup() {
 FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}
void loop() {
 leds[7] = CRGB::Red;
 FastLED.show();
 delay(250);
 leds[6] = CRGB::Yellow;
 leds[0] = CRGB::Yellow;
 FastLED.show();
 delay(250);
 leds[5] = CRGB::Green;
 leds[1] = CRGB::Green;
 FastLED.show();
 delay(250);
 leds[4] = CRGB::Blue;
 leds[2] = CRGB::Blue;
 FastLED.show();
 delay(250);
 leds[3] = CRGB::Purple;
 FastLED.show();
 delay(1000);
 for(int i = 0; i <NUM_LEDS;i++){
   leds[i] = CRGB::Black;
   FastLED.show();
 }
}



