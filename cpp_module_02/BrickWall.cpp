#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {};

BrickWall::~BrickWall() {};

BrickWall::BrickWall(BrickWall const & src) : ATarget("Inconspicuous Red-brick Wall") {
    (void)src;
};

BrickWall & BrickWall::operator = (BrickWall const & src) {
    if (this != &src) {
        this->_type = src._type;
    }
    return (*this);
};

ATarget * BrickWall::clone() {
    return (new BrickWall);
};