#include <Arduino.h>
#include "DecisionMakingCenter.h"
#include "ServiceContainer.h"

EventStorage eventStorage;

int servoControlPins[] = {9, 10};
Platform platform(servoControlPins);
ServiceContainer container = {&eventStorage, &platform};

DecisionMakingCenter dmc(&container);

// EVENTS
struct Event isLight = {"isLight", false};
struct Event isDark = {"isDark", false};

void setup()
{
    Serial.begin(9600);
    Serial.println("SETUP");

    dmc.getEventStorage()->addEvent(&isLight);
    dmc.getEventStorage()->addEvent(&isDark);
}

void loop()
{
    Serial.println("LOOP");
    delay(1000);
}