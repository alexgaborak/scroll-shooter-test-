#include "Bullet.hpp"
#include <cmath>

Bullet::Bullet(float x, float y, const std::string& picture_path, float direction, bool enemy, int damage, float v)
        : sf::Sprite(sf::Texture()), direction(direction), damage(damage), v(v * DEFAULT_SPEED) {
    // Load the texture from the picture_path
    if (!getTexture()->loadFromFile(picture_path)) {
        // Handle the case where the texture couldn't be loaded
    }

    setTexture(*getTexture());
    setPosition(x, y);
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);

    // Depending on the logic, you might need to add it to the appropriate group here
    // For simplicity, I'll assume there's a global vector for each group
    std::vector<sf::Sprite>& group = enemy ? ENEMY_BULLET_GROUP : ALLY_BULLET_GROUP;
    group.push_back(*this);
}

void Bullet::update() {
    float new_y = getPosition().y - v * std::sin(direction);
    float new_x = getPosition().x + v * std::cos(direction);
    setPosition(new_x, new_y);

    // Remove from the group if out of screen
    if (new_x > MAX_X || new_x < 0 || new_y < 0 || new_y > MAX_Y) {
        std::vector<sf::Sprite>& group = enemy ? ENEMY_BULLET_GROUP : ALLY_BULLET_GROUP;
        group.erase(std::remove(group.begin(), group.end(), *this), group.end());
    }
}
