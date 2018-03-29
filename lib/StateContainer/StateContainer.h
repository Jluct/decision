#pragma once

#include "GlobalState.h"

class StateContainer{
    private:
        GlobalState **states;
        unsigned int countState = 0;
    public:
        void addGlobalState(GlobalState *state);
        bool getGlobalState(unsigned int number, GlobalState *state);
};