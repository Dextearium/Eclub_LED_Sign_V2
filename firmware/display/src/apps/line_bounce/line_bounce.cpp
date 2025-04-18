#include "line_bounce.h"

namespace LineBounce {

  //declare global variables for App here  
  GFX::Pixel* curr;
  unsigned long timer;
  unsigned long timer2;
  uint16_t lifespan;
  uint16_t x;
  uint16_t y;
  int16_t x0;
  int16_t y0;
  int8_t dx;
  int8_t dy;
  CRGB color;

  void run() {
    GFX::clear();
    timer = millis();
    timer2 = millis();
    lifespan = random(10000) + 10000;
    x = random(56);
    y = random(20);
    color = randomColor(BRIGHTNESS);
    dx = random(8) + 1;
    dy = random(8) + 1;
    x0 = x + dx;
    y0 = y + dy;

    while(!stopped()) {
      if(millis() - timer > SPEED) {
        GFX::drawLine(x, y, x0, y0, color);
        updatePixelRaw();
        FastLED.show();
        timer = millis();
      }
      if(millis() - timer2 > lifespan) {
        GFX::clear();
        timer2 = millis();
        lifespan = random(10000) + 10000;
        dx = random(8) + 1;
        dy = random(8) + 1; 
      }
    }
  }

  //randomizes slope only on bounce(sometimes gets stuck)
  void updatePixel() {
    x = x0;
    y = y0;
    x0 += dx;
    y0 += dy;
    if(x0 > 56 || x0 < 1) {
        dx *= -1;
        x0 = x0 > 56 ? 56 : 1;
        color = randomColor(BRIGHTNESS);
        if(random(4) == 1) {
          if(random(1) == 1) {
            dx += random(2);
            dy += random(2);
          }
          else {
            dx -= random(2);
            dy -= random(2);
          }
        }
    }
    if(y0 > 20 || y0 < 1) {
      dy *= -1;
      y0 = y0 > 20 ? 20 : 1;
      color = randomColor(BRIGHTNESS);
      if(random(4) == 1) {
        if(random(1) == 1) {
          dx += random(2);
          dy += random(2);
        }
        else {
          dx -= random(2);
          dy -= random(2);
        }
      }
    }
    if(dx >= 5 || dx <= -5) {
      dx = 1;
    }
    if(dy >= 5 || dy <= -5) {
      dy = 1;
    }
  }

  //randomizes slope every single frame(rarely gets stuck)
  void updatePixelRaw() {
    x = x0;
    y = y0;
    x0 += dx;
    y0 += dy;
    if(x0 > 56 || x0 < 1) {
        dx *= -1;
        x0 = x0 > 56 ? 56 : 1;
        color = randomColor(BRIGHTNESS);
    }
    if(y0 > 20 || y0 < 1) {
        dy *= -1;
        y0 = y0 > 20 ? 20 : 1;
        color = randomColor(BRIGHTNESS);
    }
    if(random(4) == 1) {
      if(random(1) == 1) {
        dx += random(2);
        dy += random(2);
      }
      else {
        dx -= random(2);
        dy -= random(2);
      }
    }
    if(dx >= 5 || dx <= -5) {
      dx = 1;
    }
    if(dy >= 5 || dy <= -5) {
      dy = 1;
    }
  }

  CRGB randomColor(uint8_t max_brightness) {
    uint32_t red = (uint32_t)random(max_brightness);
    uint32_t green = (uint32_t)random(max_brightness);
    uint32_t blue = (uint32_t)random(max_brightness);

    return CRGB((red << 16) | (green << 8) | (blue));
  }

  // return true if you want this app to stop running and return to the main menu 
  bool stopped() {
    return(Key::is_pressed(Key::ESC));
  }
}