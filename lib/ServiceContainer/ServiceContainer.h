#pragma once

#include "EventStorage.h"
#include "Platform.h"

typedef struct
{
    EventStorage *eventStorage;
    Platform *platform;
} ServiceContainer;