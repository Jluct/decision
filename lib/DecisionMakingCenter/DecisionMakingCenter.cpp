#include "DecisionMakingCenter.h"

DecisionMakingCenter::DecisionMakingCenter(EventStorage *eventStorage){
    this->eventStorage = eventStorage;
};

EventStorage *DecisionMakingCenter::getEventStorage(){
    return this->eventStorage;
};
