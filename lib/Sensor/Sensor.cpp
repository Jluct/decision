#include "Sensor.h"

Sensor::Sensor(int (*call)(ServiceContainer *container))
{
    this->call = call;
};

int Sensor::getData(bool force = false)
{
    long int currentTime = millis();
    if ((currentTime - this->lastCall) < this->validTime && !force)
    {
        return this->data;
    }
    this->lastCall = currentTime;

    return this->data = this->call(this->container); //???
};