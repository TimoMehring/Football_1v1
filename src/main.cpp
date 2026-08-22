#include "raylib.h"
#include "state.h"
#include "graphics.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Football 1v1");

    SetTargetFPS(60);    
    
    State currentState = State::Startscreen;

    while (!WindowShouldClose())    
    {
        if(currentState == State::Startscreen){
            UpdateStartscreen(currentState);
        }

        BeginDrawing();

        ClearBackground(ORANGE);

        if(currentState == State::Startscreen){
            DrawStartscreen();
        }
        else if(currentState == State::CharSelection){
            DrawCharSelection();
        }



           

        EndDrawing();
        
    }

    CloseWindow();        

    return 0;
}