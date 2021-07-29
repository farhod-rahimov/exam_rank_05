#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ": This looks like another boring day.\n";
    this->_learnt_spell = nullptr;
};

Warlock::~Warlock() {
    std::cout << this->_name << ": My job here is done!\n";
    delete this->_learnt_spell;
}

std::string const & Warlock::getName () const {
    return (this->_name);
};

std::string const & Warlock::getTitle () const {
    return (this->_title);
};

void Warlock::setTitle(std::string const & title) {
    this->_title = title;
}

void Warlock::introduce() const {
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!\n";
}

void Warlock::learnSpell(ASpell * spell) {
    if (this->_learnt_spell != nullptr) {
        delete this->_learnt_spell;
    }
    this->_learnt_spell = spell;
}

void Warlock::forgetSpell(std::string spell) {
    if (this->_learnt_spell != nullptr) {
        if (this->_learnt_spell->getName().compare(spell) == 0) {
            delete this->_learnt_spell;
            this->_learnt_spell = nullptr;
        }
    }
}

void Warlock::launchSpell(std::string spell, ATarget & target) {
    if (this->_learnt_spell != nullptr) {
        if (this->_learnt_spell->getName().compare(spell) == 0) {
            this->_learnt_spell->launch(target);
        }
    }
}