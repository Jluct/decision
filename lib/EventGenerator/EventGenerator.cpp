#pragma once

#include "EventGenerator.h"
#include "ServiceContainer.h"

EventGenerator::EventGenerator(ServiceContainer *container){
    this->container = container;
};