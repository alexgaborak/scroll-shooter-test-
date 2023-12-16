#ifndef LASER_BEAM_HPP
#define LASER_BEAM_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "config.hpp"  // Include the config file for constants

class LaserBeam : public sf::Sprite {
public:
    LaserBeam(float x, float y, const std::string& picture_path = "images/laser_beam.png", float damage = LASER_DAMAGE);
    void update();

private:
    float damage;
};

#endif // LASER_BEAM_HPP
