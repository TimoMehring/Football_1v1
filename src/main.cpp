#include "raylib.h"
#include "state.h"
#include "graphics.h"
#include "character.h"

int main(void)
{
    const int screenWidth = 1200;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Football 1v1");

    SetTargetFPS(60); 
    
    Graphics graphics = LoadGraphics();

    std::vector<Character> characters = LoadCharacters(graphics);
    
    State currentState = State::Startscreen;

    while (!WindowShouldClose())    
    {
        switch(currentState){
            case State::Startscreen:
                UpdateStartscreen(currentState);
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
                break;
        }


           

        EndDrawing();
        
    }
    UnlaodGraphics(graphics);
    CloseWindow();        

    return 0;
}