#pragma once
#include "raylib.h"

enum class CharSelectStatus{
    Unlocked,
    Locked
};

struct Character{
    Texture2D texture;
    CharSelectStatus status;
    Vector2 position;
};