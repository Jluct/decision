#pragma once

#include "Event.h"

class EventStorage
{
  private:
    Event **events;
    unsigned int countEvents = 0;

  public:
    void addEvent(Event *event);
    bool getEvent(unsigned int number, Event *event);
    int getCount();
};