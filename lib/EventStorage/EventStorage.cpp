#pragma once

#include <Arduino.h>
#include "EventStorage.h"

void EventStorage::addEvent(Event *event)
{
  this->events = (Event **)realloc(this->events, (this->countEvents + 1) * sizeof(event));
  this->events[this->countEvents] = event;
  this->countEvents++;
};

bool EventStorage::getEvent(unsigned int number, Event *event)
{
  if (number < this->countEvents)
  {
    event = this->events[number];
    return true;
  }

  return false;
};

int EventStorage::getCount()
{
  return this->countEvents;
};
