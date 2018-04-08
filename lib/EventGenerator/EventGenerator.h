#pragma once

#include "ServiceContainer.h"
#include "EventStorage.h"
#include "Event.h"

class EventGenerator
{
private:
  struct Event **events;
  ServiceContainer *container;
  EventStorage *eventStorage;
  unsigned int countEventHandlers = 0;
  void (**handler)(ServiceContainer *container);

public:
  EventGenerator(ServiceContainer *container, EventStorage *eventStorage);
};