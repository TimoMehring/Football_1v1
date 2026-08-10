#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Football 1v1");

    SetTargetFPS(60);              

    while (!WindowShouldClose())    
    {

        BeginDrawing();

            ClearBackground(GREEN);

            DrawText("Projekt Start!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        
    }

    CloseWindow();        

    return 0;
}