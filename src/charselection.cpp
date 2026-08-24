#include "charselection.h"


void UpdateCharSelection(PlayButtonState& playButtonState, std::vector<Character>& characters,State& currentState,CharacterID& selectedCharacter){
    Vector2 mousePosition = GetMousePosition();

    Vector2 playButtonCenter = {1080.0f, 680.0f};
    float playButtonRadius = 80.0f;

    for(Character& character : characters){
        Rectangle characterRect = {character.selectPosition.x, character.selectPosition.y, character.texture.width*7.0f, character.texture.height*7.0f};

        if(character.status == CharSelectStatus::Unlocked && CheckCollisionPointRec(mousePosition, characterRect)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                playButtonState = PlayButtonState::Ready;
                selectedCharacter = character.id;
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

void DrawBorderSelect(Graphics& graphics,int& currentFrameCharSelection, std::vector<Character>& characters, CharacterID selectedCharacter){
    Vector2 mousePosition = GetMousePosition();

    for(Character& character : characters){



        if(character.id == selectedCharacter){
            Rectangle source{currentFrameCharSelection * 32.0f ,0.0f, 32.0f, 20.0f};
            Rectangle dest{character.selectPosition.x,  character.selectPosition.y, 32.0f * 7.0f, 20.0f*7.0f};
            DrawTexturePro(graphics.border_select, source, dest,{0.0f, 0.0f}, 0.0f, WHITE);
            break;
        }
    }
}

/* void DrawBorderSelect(Graphics& graphics,int& currentFrameCharSelection, std::vector<Character>& characters, CharacterID selectedCharacter){
    if(character.status == CharSelectStatus::Unlocked && CheckCollisionPointRec(mousePosition, characterRect))
    for(Character& character : characters){
        if(character.id == selectedCharacter){
            Rectangle source{currentFrameCharSelection * 32.0f ,0.0f, 32.0f, 50.0f};
            Rectangle dest{character.selectPosition.x,  32.0f * 7.0f, 50.0f * 7.0f};
            DrawTexturePro(graphics.border_select, source, dest,{0.0f, 0.0f}, 0.0f, WHITE);
            break;
        }
    }
} */