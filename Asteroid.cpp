#include "Asteroid.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

Asteroid::Asteroid(const std::string& picture_path, std::vector<sf::Sprite>& group)
        : sf::Sprite(sf::Texture()), vy(300.0f / FPS), lives(ASTEROID_LIVES) {
    // Load the texture from the picture_path
    if (!getTexture()->loadFromFile(picture_path)) {
        // Handle the case where the texture couldn't be loaded
    }

    setTexture(*getTexture());
    setPosition(rand() % (MAX_X - 2 * BORDER_X) + BORDER_X, -20);
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);

    // Depending on the logic, you might need to add it to the appropriate group here
    group.push_back(*this);
}

void Asteroid::move() {
    // Implementation...
    // Depending on the logic, you might need to update vy
    setPosition(getPosition().x, getPosition().y + vy);
}

void Asteroid::hit() {
    // Implementation...
    // Depending on the logic, you might need to handle hits here
}

void Asteroid::update() {
    // Implementation...
    // Depending on the logic, you might need to update the position and handle hits here
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);
}
