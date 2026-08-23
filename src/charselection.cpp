#include "charselection.h"

void UpdateCharSelection(PlayButtonState& playButtonState, std::vector<Character>& characters,State& currentState){
    Vector2 mousePosition = GetMousePosition();

    Vector2 playButtonCenter = {1080.0f, 680.0f};
    float playButtonRadius = 80.0f;

    for(Character& character : characters){
        Rectangle PlayButtonRect = {character.selectPosition.x, character.selectPosition.y, character.texture.width*7.0f, character.texture.height*7.0f};

        if(CheckCollisionPointRec(mousePosition, PlayButtonRect)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                playButtonState = PlayButtonState::Ready;
            }
        }
    }
    if(playButtonState == PlayButtonState::Ready && CheckCollisionPointCircle(mousePosition, playButtonCenter, playButtonRadius)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            playButtonState = PlayButtonState::Off;
            currentState = State::Startscreen; // functionality test
        }
    }
}