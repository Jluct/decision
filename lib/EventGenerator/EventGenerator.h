#pragma once

#include "ServiceContainer.h"

class EventGenerator
{
  private:
    ServiceContainer *container;
    unsigned int countEventHandlers = 0;
    void (**handler)(ServiceContainer *container);

  public:
    EventGenerator(ServiceContainer *container);
};