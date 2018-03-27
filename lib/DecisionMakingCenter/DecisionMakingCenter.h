#pragma once

#include "EventStorage.h"
#include "ServiceContainer.h"

class DecisionMakingCenter
{
  private:
    ServiceContainer *container;

  public:
    DecisionMakingCenter(ServiceContainer *container);
    EventStorage *getEventStorage();
};