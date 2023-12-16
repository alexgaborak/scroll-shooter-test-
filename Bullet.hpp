#ifndef BULLET_HPP
#define BULLET_HPP

#include <SFML/Graphics.hpp>
#include <cmath>
#include "config.hpp"  // Include the config file for constants

class Bullet : public sf::Sprite {
public:
    Bullet(float x, float y, const std::string& picture_path, float direction, bool enemy, int damage = 1, float v = 1.0f);
    void update();

private:
    float direction;
    float v;
    int damage;
};

#endif // BULLET_HPP
