#ifndef BRICK_WALL_CPP
# define BRICK_WALL_CPP

#include "ASpell.hpp"

class BrickWall : public ATarget {
    public:
        BrickWall();
        virtual ~BrickWall();
            
        BrickWall(BrickWall const & src);
        
        BrickWall & operator = (BrickWall const & src);
        
        virtual ATarget * clone();
};

#endif