#pragma once
#include "raylib.h"
#include "character.h"
#include "state.h"

enum class PlayButtonState{
    Ready, // char is selected
    Off, // no char selected
    Jump // ready playbutton jumps to next State
};

void UpdateCharSelection(PlayButtonState& playButtonState, std::vector<Character>& characters, State& currentState, CharacterID& selectedCharacter);
void DrawBorderSelect(Graphics& graphics,int& currentFrameCharSelection,std::vector<Character>& characters, CharacterID selectedCharacter);