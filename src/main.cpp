#include <Arduino.h>
#include "DecisionMakingCenter.h"

EventStorage eventStorage;
DecisionMakingCenter dmc(&eventStorage);

// EVENTS
struct Event isLight = {"isLight", false};

void setup()
{
    Serial.begin(9600);
    Serial.println("SETUP");

    dmc.getEventStorage()->addEvent(&isLight);
}

void loop()
{
    Serial.println("LOOP");
    delay(1000);
}