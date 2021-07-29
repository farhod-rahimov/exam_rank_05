#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {};

Polymorph::~Polymorph() {};

Polymorph::Polymorph(Polymorph const & src) : ASpell("Polymorph", "turned into a critter") {
    (void)src;
};

Polymorph & Polymorph::operator = (Polymorph const & src) {
    if (this != &src) {
        this->_name = src._name;
        this->_effects = src._effects;
    }
    return (*this);
};

ASpell * Polymorph::clone() {
    return (new Polymorph);
};