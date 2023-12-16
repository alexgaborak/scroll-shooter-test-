#include "Background.hpp"
#include <SFML/Graphics.hpp>

Background::Background(const std::string& picture_path) : x(0), y(-2400), vy(2.0f) {
    // Load the texture from the picture_path
    if (!image.getTexture()->loadFromFile(picture_path)) {
        // Handle the case where the texture couldn't be loaded
    }

    image.setTexture(*image.getTexture());
    image.setPosition(x, y);
}

void Background::update() {
    y += vy;

    if (y == 0) {
        y = -2400;
    }

    // Depending on the logic, you might need to update the position here
    image.setPosition(x, y);

    // Depending on the logic, you might need to draw the image here
    // For simplicity, I'll assume you have a global window object
    window.draw(image);
}
