#include <Arduino.h>
#include "ServiceContainer.h"
#include "EventGenerator.h"
#include "DecisionMakingCenter.h"
#include "SensorStorage.h"

EventStorage eventStorage;
SensorStorage sensorStorage;

int servoControlPins[] = {9, 10};
Platform platform(servoControlPins);
StateContainer stateContainer;
ServiceContainer container = {&platform, &stateContainer};

DecisionMakingCenter dmc(&container);
EventGenerator eventGenerator(&container, &eventStorage);

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