#include <Arduino.h>
#include "ServiceContainer.h"
#include "EventGenerator.h"
#include "DecisionMakingCenter.h"

EventStorage eventStorage;
int servoControlPins[] = {9, 10};
Platform platform(servoControlPins);
SensorStorage sensorStorage;
StateContainer stateContainer;
ServiceContainer container = {&eventStorage, &platform, &sensorStorage, &stateContainer};

DecisionMakingCenter dmc(&container);
EventGenerator eventGenerator(&container);

// EVENTS
struct Event isLight = {"isLight", false};
struct Event isDark = {"isDark", false};

void setup()
{
    Serial.begin(9600);
    Serial.println("SETUP");
}

void loop()
{
    Serial.println("LOOP");
    delay(1000);
}