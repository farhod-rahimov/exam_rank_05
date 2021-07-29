#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {};

Fireball::~Fireball() {};

Fireball::Fireball(Fireball const & src) : ASpell("Fireball", "burnt to a crisp") {
    (void)src;
};

Fireball & Fireball::operator = (Fireball const & src) {
    if (this != &src) {
        this->_name = src._name;
        this->_effects = src._effects;
    }
    return (*this);
};

ASpell * Fireball::clone() {
    return (new Fireball);
};