#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {};

ATarget::~ATarget() {};
        
ATarget::ATarget(ATarget const & src) {
    *this = src;
};

ATarget & ATarget::operator = (ATarget const & src) {
    if (this != &src) {
        this->_type = src._type;
    }
    return (*this);
};

std::string const & ATarget::getType() const {
    return (this->_type);
};

void ATarget::getHitBySpell(ASpell const & spell) const {
    std::cout << this->_type << " has been " << spell.getEffects() << " !\n";
};