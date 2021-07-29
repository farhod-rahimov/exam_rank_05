#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {};
TargetGenerator::~TargetGenerator() {};

TargetGenerator::TargetGenerator(TargetGenerator const & src) {
    *this = src;
};

TargetGenerator & TargetGenerator::operator = (TargetGenerator const & src) {
    if (this != &src) {
        this->_learnt_targets = src._learnt_targets;
    }
    return (*this);
};

void TargetGenerator::learnTargetType(ATarget * target) {
    this->_learnt_targets[target->getType()] = target->clone();
};

void TargetGenerator::forgetTargetType(std::string const & name) {
    std::map <std::string, ATarget *>::iterator it;

    it = this->_learnt_targets.find(name);
    if (it != this->_learnt_targets.end()) {
        delete it->second;
        this->_learnt_targets.erase(it);
    }
}; 

ATarget* TargetGenerator::createTarget(std::string const & name) {
    std::map <std::string, ATarget *>::iterator it;

    it = this->_learnt_targets.find(name);
    if (it != this->_learnt_targets.end()) {
        return (it->second->clone());
    }
    return (nullptr);
};