#ifndef ASTEROID_HPP
#define ASTEROID_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "config.hpp"  // Include the config file for constants

class Asteroid : public sf::Sprite {
public:
    Asteroid(const std::string& picture_path = "images/asteroid.png", std::vector<sf::Sprite>& group = ASTEROID_GROUP);
    void move();
    void hit();
    void update();

private:
    float vy;
    int lives;
};

#endif // ASTEROID_HPP
