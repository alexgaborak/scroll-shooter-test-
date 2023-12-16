#ifndef BUFF_HPP
#define BUFF_HPP

#include "config.hpp"  // Include the config file for constants

class Buff {
public:
    Buff(const std::string& state);
    void update();
    void apply(const std::string& state, float time);

private:
    int timer;
    std::string default_state;
    std::string state;
};

#endif // BUFF_HPP
