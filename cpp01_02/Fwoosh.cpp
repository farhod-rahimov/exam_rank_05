#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {};

Fwoosh::~Fwoosh() {};

Fwoosh::Fwoosh(Fwoosh const & src) : ASpell("Fwoosh", "fwooshed") {};

Fwoosh & Fwoosh::operator = (Fwoosh const & src) {
    if (this != &src) {
        this->_name = src._name;
        this->_effects = src._effects;
    }
    return (*this);
};

ASpell * Fwoosh::clone() {
    return (new Fwoosh);
};