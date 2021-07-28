#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>

#include "ASpell.hpp"

class ATarget;
class ASpell;

class ATarget {
    protected:
        std::string _type;

    public:
        ATarget(std::string type);
        virtual ~ATarget();

        ATarget(ATarget const & src);

        ATarget & operator = (ATarget const & src);

        std::string const & getType() const;

        void getHitBySpell(ASpell const & spell) const;
        
        virtual ATarget * clone() = 0;
};

#endif