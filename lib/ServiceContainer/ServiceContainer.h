#pragma once

#include "EventStorage.h"
#include "Platform.h"
#include "SensorStorage.h"
#include "StateContainer.h"

class ServiceContainer
{
  public:
    EventStorage *eventStorage;
    Platform *platform;
    SensorStorage *sensorStorage;
    StateContainer *stateContainer;
};