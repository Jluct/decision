// #pragma once

#include "EventGenerator.h"
#include "ServiceContainer.h"
#include "EventStorage.h"
#include "Event.h"

EventGenerator::EventGenerator(ServiceContainer *container, EventStorage *eventStorage)
{
    this->container = container;
    this->eventStorage = eventStorage;
};

void EventGenerator::eventVerification(){
    void(*handler)(ServiceContainer * container) = this->handler[this->currentHandler];
    handler(this->container);
};