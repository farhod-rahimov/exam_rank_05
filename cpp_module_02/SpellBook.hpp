#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

#include "ASpell.hpp"

#include <map>

class SpellBook {
    private:
        std::map <std::string, ASpell *> _learnt_spells;

        SpellBook(SpellBook const & src);
        SpellBook & operator = (SpellBook const & src);

    public:
        SpellBook();
        virtual ~SpellBook();

        void learnSpell(ASpell * spell);
        void forgetSpell(std::string const & name);
        ASpell* createSpell(std::string const & name);
};

#endif