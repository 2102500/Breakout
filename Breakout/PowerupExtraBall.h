#pragma once

#include "PowerupBase.h"

class PowerupExtraBall : public PowerupBase
{
public:
    PowerupExtraBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball, GameManager* gameManager);
    ~PowerupExtraBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect

    GameManager* _gameManager;
};

