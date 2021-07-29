#include "SpellBook.hpp"

SpellBook::SpellBook() {};
SpellBook::~SpellBook() {
    std::map <std::string, ASpell *>::iterator it;

    it = this->_learnt_spells.begin();
    for (; it != this->_learnt_spells.end(); it++) {
        delete it->second;
    }
};

SpellBook::SpellBook(SpellBook const & src) {
    *this = src;
};

SpellBook & SpellBook::operator = (SpellBook const & src) {
    std::map <std::string, ASpell *>::iterator it;

    if (this != &src) {
        this->_learnt_spells = src._learnt_spells;
    }
    return (*this);
};

void SpellBook::learnSpell(ASpell * spell) {
    this->_learnt_spells[spell->getName()] = spell->clone();
};

void SpellBook::forgetSpell(std::string const & name) {
    std::map <std::string, ASpell *>::iterator it;

    it = this->_learnt_spells.find(name);
    if (it != this->_learnt_spells.end()) {
        delete it->second;
        this->_learnt_spells.erase(it);
    }
}; 

ASpell* SpellBook::createSpell(std::string const & name) {
    std::map <std::string, ASpell *>::iterator it;

    it = this->_learnt_spells.find(name);
    if (it != this->_learnt_spells.end()) {
        return (it->second->clone());
    }
    return (nullptr);
};