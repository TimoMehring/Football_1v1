#include "graphics.h"

Graphics LoadGraphics(){
    Graphics graphics;
    // CharSelection Textures
    graphics.locked_select = LoadTexture("assets/CharSelection/locked_select.png");
    graphics.border_select = LoadTexture("assets/CharSelection/border_select.png");

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
    UnloadTexture(graphics.border_select);

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
