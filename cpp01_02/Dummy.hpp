#ifndef DUMMY_CPP
# define DUMMY_CPP

#include "ASpell.hpp"

class Dummy : public ATarget {
    public:
        Dummy();
        virtual ~Dummy();
            
        Dummy(Dummy const & src);
        
        Dummy & operator = (Dummy const & src);
        
        virtual ATarget * clone();
};

#endif