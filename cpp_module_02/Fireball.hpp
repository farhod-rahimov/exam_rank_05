#ifndef FIREBALL_CPP
# define FIREBALL_CPP

#include "ASpell.hpp"

class Fireball : public ASpell {
    public:
        Fireball();
        virtual ~Fireball();
            
        Fireball(Fireball const & src);
        
        Fireball & operator = (Fireball const & src);
        
        virtual ASpell * clone();
};

#endif