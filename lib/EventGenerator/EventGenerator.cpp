#pragma once

#include "EventGenerator.h"
#include "ServiceContainer.h"
#include "EventStorage.h"

EventGenerator::EventGenerator(ServiceContainer *container, EventStorage *eventStorage)
{
    this->container = container;
    this->eventStorage = eventStorage;
};