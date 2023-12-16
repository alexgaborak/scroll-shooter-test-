#ifndef SHIP_HPP
#define SHIP_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "config.hpp"  // Include the config file for constants

class Ship : public sf::Sprite {
public:
    Ship(float x, float y, const std::string& picture_path, bool enemy, float speed = 1.0f, int lives = 1);
    void update();

private:
    float vx;
    float vy;
    int lives;
    float v;
    bool enemy;

    void move();
    void hit();
    void update_buffs();
};

#endif // SHIP_HPP
