

// Class Bullet
class Bullet {
public:
    Bullet(float x, float y, std::string picture_path, float direction, bool enemy, int damage = 1, float v = 1.0f) {
        // Implementation...
    }

    void update() {
        // Implementation...
    }
};

// Class Ship
class Ship {
public:
    Ship(float x, float y, std::string picture_path, bool enemy, float speed = 1.0f, int lives = 1) {
        // Implementation...
    }

    void update() {
        // Implementation...
    }

private:
    void move() {
        // Implementation...
    }

    void hit() {
        // Implementation...
    }

    void update_buffs() {
        // Implementation...
    }
};

// Class EnemyBullet
class EnemyBullet : public Bullet {
public:
    EnemyBullet(float x, float y, float direction, std::string picture_path = "images/enemy_bullet.png", int damage = ENEMY_BULLET_DAMAGE)
            : Bullet(x, y, picture_path, direction, true, damage) {
        // Implementation...
    }
};

// Class EnemyShip
class EnemyShip : public Ship {
public:
    EnemyShip(std::string picture_path = "images/enemy_ship.png", int lives = ENEMY_SHIP_LIVES)
            : Ship(rand() % (MAX_X - BORDER_X) + BORDER_X, rand() % (MAX_Y / 2 - BORDER_Y) + BORDER_Y, picture_path, true, 1.0f, lives) {
        // Implementation...
    }

    void update() {
        // Implementation...
    }

    void shoot() {
        // Implementation...
    }

    void hit() {
        // Implementation...
    }
};
