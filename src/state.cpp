#include "state.h"

void UpdateStartscreen(State& currentState){
    if(IsKeyPressed(KEY_ENTER)){
        currentState = State::CharSelection;
    }
}