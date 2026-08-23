#include "raylib.h"
#include "state.h"
#include "graphics.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Football 1v1");

    SetTargetFPS(60); 
    
    Graphics graphics = LoadGraphics();
    
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
                DrawCharSelection();
                break;
        }


           

        EndDrawing();
        
    }
    UnlaodGraphics(graphics);
    CloseWindow();        

    return 0;
}