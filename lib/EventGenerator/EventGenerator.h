#pragma once

#include "ServiceContainer.h"
#include "EventStorage.h"
#include "Event.h"

class EventGenerator
{
private:
  ServiceContainer *container;
  EventStorage *eventStorage;
  unsigned int countEventHandlers = 0;
  void (**handler)(ServiceContainer *container);
  int currentHandler = 0;

public:
  EventGenerator(ServiceContainer *container, EventStorage *eventStorage);
  void eventVerification();
};