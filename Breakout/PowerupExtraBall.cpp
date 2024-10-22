#include "PowerupExtraBall.h"

PowerupExtraBall::PowerupExtraBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball), _window(window), _extraBall(nullptr), _gameManager(nullptr)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupExtraBall::~PowerupExtraBall()
{
}

std::pair<POWERUPS, float> PowerupExtraBall::applyEffect()
{
    _extraBall->spawnExtraBall();
    return { extraBall, 5.0f };
}
