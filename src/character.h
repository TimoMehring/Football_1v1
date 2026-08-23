#pragma once
#include "raylib.h"
#include <vector>
#include "graphics.h"

enum class CharSelectStatus{
    Unlocked,
    Locked
};

enum class CharacterID{
    frog001,
    frog002,
    frog003,

    void001,
    void002,
    void003
};

struct Character{
    CharacterID id;
    Texture2D texture;
    CharSelectStatus status;
    Vector2 selectPosition;
};

std::vector<Character> LoadCharacters(Graphics& graphics);

void DrawCharSelection(Graphics graphics, std::vector<Character>& characters);