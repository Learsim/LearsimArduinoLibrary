#ifndef Learsim_h
#define Learsim_h
#include <Adafruit_NeoPixel.h>
#include <ArduinoJson.h>
#include "Arduino.h"

class Button
{
  public:
    Button();
    void Init(int pin, char identfier[]);
    bool GetValue();
  private:
    int _pin;
    char _identifier[];
};
class NeoPixelStrip
{
  public:
    Adafruit_NeoPixel pixelStrip;
    NeoPixelStrip(int pin,int count, char identfier[]);
    void SetPixel(int num, int r, int g, int b);
  private:
    int _pin;
    int _count;
    char _identifier[];
};
class Led
{
  public:
    Led();
    void Init(int pin, char identfier[]);
    void SetValue(bool value);
    char* ID;
  private:
    int _pin;
    char* _identifier;
};
class MessangeHandler
{
  public:
    MessangeHandler();
    void Init(int bufferSize);
    String GetValue(String key);
    bool DeserializeJson();
  private:
};
#endif
