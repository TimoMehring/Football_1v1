#pragma once
#include "raylib.h"
#include <vector>

struct Graphics{
    Texture2D locked_select;

    Texture2D frog_001_select;
    Texture2D frog_002_select;
    Texture2D frog_003_select;

    Texture2D void_001_select;
    Texture2D void_002_select;
    Texture2D void_003_select;

    Texture2D playButton;
};

Graphics LoadGraphics();
void DrawStartscreen();
//void DrawCharSelection(Graphics graphics, std::vector<Character>& characters);

void UnlaodGraphics(Graphics& Graphics);