#include "Ship.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

Ship::Ship(float x, float y, const std::string& picture_path, bool enemy, float speed, int lives)
        : sf::Sprite(sf::Texture()), vx(0), vy(0), lives(lives), v(speed * DEFAULT_SPEED), enemy(enemy) {
    // Load the texture from the picture_path
    if (!getTexture()->loadFromFile(picture_path)) {
        // Handle the case where the texture couldn't be loaded
    }

    setTexture(*getTexture());
    setPosition(x, y);
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);

    // Depending on the logic, you might need to add it to the appropriate group here
    std::vector<sf::Sprite>& group = enemy ? ENEMY_SHIP_GROUP : ALLY_SHIP_GROUP;
    group.push_back(*this);
}

void Ship::update() {
    move();
    hit();
    update_buffs();
}

void Ship::move() {
    // Implementation...
    // Depending on the logic, you might need to update vx and vy
    setPosition(getPosition().x + vx, getPosition().y + vy);
}

void Ship::hit() {
    std::vector<sf::Sprite>& opposing_bullet_group = enemy ? ALLY_BULLET_GROUP : ENEMY_BULLET_GROUP;

    for (auto it = opposing_bullet_group.begin(); it != opposing_bullet_group.end();) {
        if (getGlobalBounds().intersects(it->getGlobalBounds())) {
            lives -= it->damage;
            it = opposing_bullet_group.erase(it);
        } else {
            ++it;
        }
    }

    for (const auto& asteroid : ASTEROID_GROUP) {
        if (getGlobalBounds().intersects(asteroid.getGlobalBounds())) {
            lives -= 1;
        }
    }

    // Remove the ship if it has no lives left
    if (lives <= 0) {
        std::vector<sf::Sprite>& group = enemy ? ENEMY_SHIP_GROUP : ALLY_SHIP_GROUP;
        group.erase(std::remove(group.begin(), group.end(), *this), group.end());
    }
}

void Ship::update_buffs() {
    // Implementation...
    // Depending on the logic, you might need to update buffs here
}
