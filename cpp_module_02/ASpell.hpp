#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>

#include "ATarget.hpp"

class ASpell;
class ATarget;

class ASpell {
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();

        ASpell(ASpell const & src);

        ASpell & operator = (ASpell const & src);

        std::string const getName() const;
        std::string const getEffects() const;

        virtual ASpell * clone() = 0;

        void launch(ATarget const & target) const;
};

#endif