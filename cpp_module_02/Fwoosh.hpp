#ifndef FWOOSH_CPP
# define FWOOSH_CPP

#include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        virtual ~Fwoosh();
            
        Fwoosh(Fwoosh const & src);
        
        Fwoosh & operator = (Fwoosh const & src);
        
        virtual ASpell * clone();
};

#endif