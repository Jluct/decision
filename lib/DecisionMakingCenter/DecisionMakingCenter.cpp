#include "DecisionMakingCenter.h"
#include "ServiceContainer.h"

DecisionMakingCenter::DecisionMakingCenter(ServiceContainer *container)
{
    this->container = container;
};

EventStorage *DecisionMakingCenter::getEventStorage()
{
    return this->container->eventStorage;
};
