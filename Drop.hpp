#ifndef DROP_HPP
#define DROP_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "config.hpp"  // Include the config file for constants

class Drop : public sf::Sprite {
public:
    Drop(float x, float y, std::vector<sf::Sprite>& group = DROP_GROUP);
    void update();

private:
    float vy;
};

#endif // DROP_HPP
