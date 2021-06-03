

#include "Learsim.h"
#include <FastLED.h>
#include <ArduinoJson.h>
#include <string.h>


MessangeHandler msghndlr;
char *id = "5785f0b5-9162-4b90-966b-30bef0019639";
void setup()
{
    Serial.begin(9600);
    msghndlr.Init(512);
    ledstrip.Init();
}
void loop()
{
    if(Serial.available()){

    }
}
/**/
