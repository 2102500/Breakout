#include "PowerupExtraBall.h"
#include "GameManager.h"

PowerupExtraBall::PowerupExtraBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball, GameManager* gameManager)
    : PowerupBase(window, paddle, ball), _gameManager(gameManager)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupExtraBall::~PowerupExtraBall()
{
}

std::pair<POWERUPS, float> PowerupExtraBall::applyEffect()
{
    _gameManager->spawnExtraBall();
    return { extraBall, 5.0f };
}
