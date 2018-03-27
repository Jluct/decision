#pragma once

#include "EventStorage.h"

class DecisionMakingCenter
{
  private:
    EventStorage *eventStorage;

  public:
    DecisionMakingCenter(EventStorage *eventStorage);
    EventStorage *getEventStorage();
};