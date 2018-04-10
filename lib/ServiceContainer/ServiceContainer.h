#pragma once

#include "..\Platform\Platform.h"
#include "StateContainer.h"
#include "SensorStorage.h"

class ServiceContainer
{
  public:

    Platform *platform;
    StateContainer *stateContainer;
    SensorStorage *sensorsContainer;
};