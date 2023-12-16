#include "Buff.hpp"
#include "config.hpp"  // Include the config file for constants

Buff::Buff(const std::string& state) : timer(0), default_state(state), state(state) {}

void Buff::update() {
    if (timer > 0) {
        timer -= 1;
    } else if (timer == 0) {
        state = default_state;
    }
}

void Buff::apply(const std::string& state, float time) {
    this->state = state;
    timer += static_cast<int>(time * FPS);  // Time is specified in seconds
}
