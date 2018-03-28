#pragma once

#include "SensorStorage.h"
#include "Sensor.h"
#include <Arduino.h>

void SensorStorage::addSensor(Sensor *sensor)
{
    this->sensors = (Sensor **)realloc(this->sensors, this->countSensors + 1 * sizeof(sensor));
    this->sensors[this->countSensors] = sensor;
    this->countSensors++;
};

bool SensorStorage::getSensor(int number, Sensor *sensor){
    if (number < this->countSensors)
    {
        sensor = this->sensors[number];
        return true;
    }

    return false;
};