#include "graphics.h"

Graphics LoadGraphics(){
    Graphics graphics;
    // CharSelection Textures
    graphics.locked_select = LoadTexture("assets/CharSelection/locked_select.png");

    graphics.frog_001_select = LoadTexture("assets/CharSelection/frog_001_select.png");
    graphics.frog_002_select = LoadTexture("assets/CharSelection/frog_002_select.png");
    graphics.frog_003_select = LoadTexture("assets/CharSelection/frog_003_select.png");

    graphics.void_001_select = LoadTexture("assets/CharSelection/void_001_select.png");
    graphics.void_002_select = LoadTexture("assets/CharSelection/void_002_select.png");
    graphics.void_003_select = LoadTexture("assets/CharSelection/void_003_select.png");

    graphics.playButton = LoadTexture("assets/CharSelection/playbutton.png");


    return graphics;
}

void UnlaodGraphics(Graphics& graphics){
    // CharSelection Textures
    UnloadTexture(graphics.locked_select);

    UnloadTexture(graphics.frog_001_select);
    UnloadTexture(graphics.frog_002_select);
    UnloadTexture(graphics.frog_003_select);

    UnloadTexture(graphics.void_001_select);
    UnloadTexture(graphics.void_002_select);
    UnloadTexture(graphics.void_003_select);

    UnloadTexture(graphics.playButton);
}

void DrawStartscreen(){
    ClearBackground(GREEN);
}

/* void DrawCharSelection(Graphics graphics){
    ClearBackground(BLUE);
    DrawTextureEx(graphics.frog_001_select,{100.0f, 120.0f},0.0f,7.0f,WHITE);
    DrawTextureEx(graphics.frog_002_select,{360.0f, 120.0f},0.0f,7.0f,WHITE);
    DrawTextureEx(graphics.frog_003_select,{620.0f, 120.0f},0.0f,7.0f,WHITE);
    DrawTextureEx(graphics.void_001_select,{100.0f, 300.0f},0.0f,7.0f,WHITE);
    DrawTextureEx(graphics.void_002_select,{360.0f, 300.0f},0.0f,7.0f,WHITE);
    DrawTextureEx(graphics.void_003_select,{620.0f, 300.0f},0.0f,7.0f,WHITE);

    DrawTextureEx(graphics.locked_select,{620.0f, 480.0f},0.0f,7.0f,WHITE);

    DrawTextureEx(graphics.playButton, {1000.0f, 600.0f},0.0f, 5.0f,WHITE);
} */