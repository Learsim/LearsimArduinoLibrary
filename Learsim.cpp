#include "Arduino.h"
#include "Learsim.h"
#include <Adafruit_NeoPixel.h>

NeoPixelStrip::NeoPixelStrip(int pin, int count, char identfier[])
{
  pixelStrip = Adafruit_NeoPixel(count, pin, NEO_GRB + NEO_KHZ800);
  pixelStrip.begin();
  pixelStrip.show();
}
void NeoPixelStrip::SetPixel(int num, int r, int g, int b)
{
  pixelStrip.setPixelColor(num, r, g, b);
  pixelStrip.show();
}

void Button::Init(int pin, char identfier[]){
  pinMode(pin, INPUT);
  _pin = pin;
}

bool Button::GetValue(){
  return digitalRead(_pin);
}
Led::Led(){}

void Led::Init(int pin, char identfier[]){
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Led::SetValue(bool value){
  digitalWrite(_pin,value);
}
