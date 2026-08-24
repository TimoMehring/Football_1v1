#include "raylib.h"
#include "state.h"
#include "graphics.h"
#include "character.h"
#include "charselection.h"

int main(void)
{
    const int screenWidth = 1200;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Football 1v1");

    SetTargetFPS(60); 

    int currentFrameCharSelection = 0;
    float charSelectTimer = 0.0f;
    
    Graphics graphics = LoadGraphics();

    std::vector<Character> characters = LoadCharacters(graphics);
    
    State currentState = State::Startscreen;
    CharSelectStatus charSelectStatus = CharSelectStatus::Locked;
    PlayButtonState playButtonState = PlayButtonState::Off;
    CharacterID selectedChar = CharacterID::None;

    while (!WindowShouldClose())    
    {
        switch(currentState){
            case State::Startscreen:
                UpdateStartscreen(currentState);
                break;
            
            case State::CharSelection:
                charSelectTimer += GetFrameTime();
                if(charSelectTimer >= 0.5){
                    currentFrameCharSelection++;
                    if(currentFrameCharSelection >= 3){
                        currentFrameCharSelection = 0;
                    }
                    charSelectTimer = 0.0f;
                }
                UpdateCharSelection(playButtonState, characters, currentState, selectedChar);
                break;
        }

        BeginDrawing();

        ClearBackground(ORANGE);

        switch(currentState){
            case State::Startscreen:
                DrawStartscreen();
                break;

            case State::CharSelection:
                DrawCharSelection(graphics,characters);
                if(playButtonState == PlayButtonState::Ready){
                    DrawBorderSelect(graphics, currentFrameCharSelection, characters, selectedChar);
                }
                break;
        }


           

        EndDrawing();
        
    }
    UnlaodGraphics(graphics);
    CloseWindow();        

    return 0;
}