#include "Learsim.h"
#include <Adafruit_NeoPixel.h>
#include <ArduinoJson.h>
MessangeHandler msghndlr;
void setup()
{
    
    msghndlr.Init(2048);
    Serial.begin(9600);
}
void loop()
{
    if (Serial.available())
    {
        if (msghndlr.DeserializeJson())
        {
                Serial.println(msghndlr.GetValue("ID"));
                Serial.println(msghndlr.GetValue("VALUE"));
            
           
        }
    }
}