#pragma once
#include "raylib.h"

struct Graphics{
    Texture2D frog_001_select;
    Texture2D frog_002_select;
    Texture2D frog_003_select;

    Texture2D void_001_select;
    Texture2D void_002_select;
    Texture2D void_003_select;
};

Graphics LoadGraphics();
void DrawStartscreen();
void DrawCharSelection();

void UnlaodGraphics(Graphics& Graphics);