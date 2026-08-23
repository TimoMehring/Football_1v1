#include "character.h"

std::vector<Character> LoadCharacters(Graphics& graphics){
    std::vector<Character> characters;

    characters.push_back({
        CharacterID::frog001, graphics.frog_001_select, CharSelectStatus::Unlocked, {100.0f, 120.0f}
    });

    characters.push_back({
        CharacterID::frog002, graphics.frog_002_select, CharSelectStatus::Locked, {360.0f, 120.0f}
    });

    characters.push_back({
        CharacterID::frog003, graphics.frog_003_select, CharSelectStatus::Locked, {620.0f, 120.0f}
    });

    characters.push_back({
        CharacterID::void001, graphics.void_001_select, CharSelectStatus::Locked, {100.0f, 300.0f}
    });

    characters.push_back({
        CharacterID::void002, graphics.void_002_select, CharSelectStatus::Locked, {360.0f, 300.0f}
    });

    characters.push_back({
        CharacterID::void003, graphics.void_003_select, CharSelectStatus::Locked, {620.0f, 300.0f}
    });

    return characters;
}

// Draw functions

void DrawCharSelection(Graphics graphics, std::vector<Character>& characters){
    ClearBackground(BLUE);

    for(Character& character : characters){
        DrawTextureEx(character.texture, character.selectPosition,0.0f,7.0f,WHITE);
    }

    DrawTextureEx(graphics.playButton, {1000.0f, 600.0f},0.0f, 5.0f,WHITE);
}