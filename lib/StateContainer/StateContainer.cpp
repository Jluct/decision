#pragma once

#include <Arduino.h>
#include "GlobalState.h"
#include "StateContainer.h"

void StateContainer::addGlobalState(GlobalState *state)
{
    this->states = (GlobalState **)realloc(this->states, (this->countState + 1) * sizeof(state));
    this->states[this->countState] = state;
    this->countState++;
};

bool StateContainer::getGlobalState(unsigned int number, GlobalState *state)
{
    if (number < this->countState)
    {
        state = this->states[number];
        return true;
    }

    return false;
};