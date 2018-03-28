#pragma once

#include "Sensor.h"

class SensorStorage
{
  private:
    Sensor **sensors;
    unsigned int countSensors = 0;

  public:
    void addSensor(Sensor *sensor);
    bool getSensor(int number);
}