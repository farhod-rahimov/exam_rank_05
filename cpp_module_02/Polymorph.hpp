#ifndef POLYMORPH_CPP
# define POLYMORPH_CPP

#include "ASpell.hpp"

class Polymorph : public ASpell {
    public:
        Polymorph();
        virtual ~Polymorph();
            
        Polymorph(Polymorph const & src);
        
        Polymorph & operator = (Polymorph const & src);
        
        virtual ASpell * clone();
};

#endif