#pragma once
#include <SFML/Graphics.hpp>


class GameManager;  // forward declaration



class ExtraBall {
public:
    ExtraBall(sf::RenderWindow* window, float velocity, GameManager* gameManager);
    ~ExtraBall();
    void update(float dt);
    void render();
    void setVelocity(float coeff, float duration);

private:
    sf::CircleShape _sprite;
    sf::Vector2f _direction;
    sf::RenderWindow* _window;
    float _velocity;
    bool _isAlive;
    float _timeWithPowerupEffect;

    GameManager* _gameManager;  // Reference to the GameManager

    static constexpr float RADIUS = 10.0f;
    static constexpr float VELOCITY = 350.0f;   // for reference.
};

