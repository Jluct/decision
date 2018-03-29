#pragma once

#include "ServiceContainer.h"

class Sensor
{
  private:
    int data;
    bool force = false;
    int lastCall = 0;
    int validTime = 100;
    int (*call)();

  public:
    Sensor(int (*call)());
    int getData(bool force = false);
};