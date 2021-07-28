#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) {
    this->_name = name;
    this->_effects = effects;
};

ASpell::~ASpell() {};

ASpell::ASpell(ASpell const & src) {
    *this = src;
};

ASpell & ASpell::operator = (ASpell const & src) {
    if (this != &src) {
        this->_name = src._name;
        this->_effects = src._effects;
    }
    return (*this);
};

std::string const ASpell::getName() const {
    return (this->_name);
};

std::string const ASpell::getEffects() const {
    return (this->_effects);
};

void ASpell::launch(ATarget const & target) const {
    target.getHitBySpell(*this);
};
