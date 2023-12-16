#include "LaserBeam.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

LaserBeam::LaserBeam(float x, float y, const std::string& picture_path, float damage)
        : sf::Sprite(sf::Texture()), damage(damage) {
    // Load the texture from the picture_path
    if (!getTexture()->loadFromFile(picture_path)) {
        // Handle the case where the texture couldn't be loaded
    }

    setTexture(*getTexture());
    setPosition(x, y);
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);

    // Depending on the logic, you might need to add it to the appropriate group here
    LASER_GROUP.push_back(*this);
}

void LaserBeam::update() {
    // Implementation...
    // Depending on the logic, you might need to update the position here
    // You can use setPosition(x, y) to update the position
}
