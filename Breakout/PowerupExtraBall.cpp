#include "PowerupExtraBall.h"

PowerupExtraBall::PowerupExtraBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupExtraBall::~PowerupExtraBall()
{
}

std::pair<POWERUPS, float> PowerupExtraBall::applyEffect()
{
    _ball->setVelocity(0.5f, 5.0f);
    return { extraBall, 5.0f };
}
