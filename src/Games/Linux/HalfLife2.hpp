#pragma once
#include "Game.hpp"

class HalfLife2 : public Game {
public:
    HalfLife2();

    void LoadOffsets() override;
    void LoadRules() override;
    const char* Version() override;

    static const char* Process();
};