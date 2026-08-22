#pragma once
#include "raylib.h"

enum class State{
    Startscreen,
    CharSelection
};

void UpdateStartscreen(State& currentState);