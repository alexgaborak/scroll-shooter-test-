#include "Drop.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

Drop::Drop(float x, float y, std::vector<sf::Sprite>& group)
        : sf::Sprite(sf::Texture()), vy(300.0f / FPS) {
    // Determine the type of drop
    std::vector<std::string> dropTypes = {"shield", "heal", "triple_shot", "double_shot", "laser", "double_score"};
    std::string type = dropTypes[rand() % dropTypes.size()];

    // Set the texture based on the drop type
    if (!getTexture()->loadFromFile("images/" + type + "_buff.png")) {
        // Handle the case where the texture couldn't be loaded
    }

    setTexture(*getTexture());
    setPosition(x, y);
    setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);

    // Depending on the logic, you might need to add it to the appropriate group here
    group.push_back(*this);
}

void Drop::update() {
    // Implementation...
    // Depending on the logic, you might need to update the position here
    setPosition(getPosition().x, getPosition().y + vy);

    // Remove from the group if out of screen
    if (getPosition().x > MAX_X || getPosition().x < 0 || getPosition().y < 0 || getPosition().y > MAX_Y) {
        std::vector<sf::Sprite>& group = DROP_GROUP;
        group.erase(std::remove(group.begin(), group.end(), *this), group.end());
    }
}
