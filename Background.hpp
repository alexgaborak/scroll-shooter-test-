#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <SFML/Graphics.hpp>
#include "config.hpp"  // Include the config file for constants

class Background {
public:
    Background(const std::string& picture_path = "images/back.png");
    void update();

private:
    sf::Sprite image;
    float x;
    float y;
    float vy;
};

#endif // BACKGROUND_HPP
