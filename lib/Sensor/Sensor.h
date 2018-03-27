#pragma once

#include "ServiceContainer.h"

class Sensor
{
  private:
    int data;
    bool force = false;
    int lastCall = 0;
    int validTime = 100;
    ServiceContainer *container;
    int (*call)(ServiceContainer *container);

  public:
    Sensor(int (*call)(ServiceContainer *container));
    int getData(bool force = false);
};