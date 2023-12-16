#ifndef ABOUTINFO_HPP
#define ABOUTINFO_HPP

#include <SFML/Graphics.hpp>
#include "config.hpp"  // Include the config file for constants

class AboutInfo {
public:
    AboutInfo(const std::string& picture_path = "images/about.png");
    void update();

private:
    sf::Sprite image;
    float x;
    float y;
};

#endif // ABOUTINFO_HPP
