#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <string>

// Constants
const int MAX_X = 700;
const int MAX_Y = 720;
const int FPS = 60;
const int BORDER_X = 36;
const int BORDER_Y = 28;
const int SPAWN_SECONDS = 5;
const int SHOOTING_COEF = 10;
const int BUFF_DURATION = 5;
const int DROP_CHANCE = 2;
const int INTENSITY = 30;
const int BOSS_SCORE = 20;
const double DEFAULT_SPEED = 600.0 / FPS;
const int ALLY_LIVES = 5;
const int BOSS_LIVES = 100;
const int ENEMY_BULLET_DAMAGE = 1;
const double LASER_DAMAGE = 0.15;
const int ENEMY_SHIP_LIVES = 1;
const int ASTEROID_LIVES = 5;

// Image Paths
const std::unordered_map<std::string, std::string> POWERUP_IMAGES = {
        {"heal", "images/heal_buff.png"},
        {"shield", "images/shield_buff.png"},
        {"laser", "images/laser.png"},
        {"double_score", "images/coins_buff.png"},
        {"double_shot", "images/double_shot.png"},
        {"triple_shot", "images/triple_shot.png"}
};

// Music Paths
const std::unordered_map<std::string, std::string> MUSIC = {
        {"game1", "OST/game_ost1.mp3"},
        {"game2", "OST/game_ost2_KoppenAsF.mp3"},
        {"boss1", "OST/boss_ost1_Hydrophobia.mp3"},
        {"boss2", "OST/boss_ost2_BFGDivision.mp3"},
        {"menu1", "OST/menu_ost1_GIAA-FrozenTwilight.mp3"},
        {"menu2", "OST/menu_ost2_GIAA-EmpyreanGlow_CrystalCanyon.mp3"}
};

// Groups
sf::Sprite sprite;  // Placeholder for sprite; replace with actual sprite class
std::vector<sf::Sprite> DROP_GROUP;
std::vector<sf::Sprite> LASER_GROUP;
std::vector<sf::Sprite> ENEMY_BULLET_GROUP;
std::vector<sf::Sprite> ALLY_BULLET_GROUP;
std::vector<sf::Sprite> ENEMY_SHIP_GROUP;
std::vector<sf::Sprite> ALLY_SHIP_GROUP;
std::vector<sf::Sprite> ASTEROID_GROUP;

// Group Hierarchy
std::vector<std::vector<sf::Sprite>> GROUPS = {
        LASER_GROUP, ASTEROID_GROUP, ENEMY_BULLET_GROUP,
        ALLY_BULLET_GROUP, ENEMY_SHIP_GROUP, ALLY_SHIP_GROUP, DROP_GROUP
};

// Keys Down
std::unordered_map<std::string, int> KEYS_DOWN = {{"w", 0}, {"a", 0}, {"s", 0}, {"d", 0}};

// Game State
std::string GAME_STATE = "startscreen";



/*// Window dimensions
const int MAX_X = 700;
const int MAX_Y = 720;

// Frames per second
const int FPS = 60;

// Borders
const int BORDER_X = 36;
const int BORDER_Y = 28;

// Spawn settings
const int SPAWN_SECONDS = 5;
const int SHOOTING_COEF = 10;
const int BUFF_DURATION = 5;
const int DROP_CHANCE = 2;
const int INTENSITY = 30;

// Boss appearance
const int BOSS_SCORE = 20;

// Speed
const double DEFAULT_SPEED = 600.0 / FPS;

// Lives
const int ALLY_LIVES = 5;
const int BOSS_LIVES = 100;

// Damage and Lives
const int ENEMY_BULLET_DAMAGE = 1;
const double LASER_DAMAGE = 0.15;
const int ENEMY_SHIP_LIVES = 1;
const int ASTEROID_LIVES = 5;*/

#endif // CONFIG_HPP
