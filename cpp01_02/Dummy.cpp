#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {};

Dummy::~Dummy() {};

Dummy::Dummy(Dummy const & src) : ATarget("Target Practice Dummy") {
    (void)src;
};

Dummy & Dummy::operator = (Dummy const & src) {
    if (this != &src) {
        this->_type = src._type;
    }
    return (*this);
};

ATarget * Dummy::clone() {
    return (new Dummy);
};