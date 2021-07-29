#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

#include "ASpell.hpp"

#include <map>

class TargetGenerator {
    private:
        std::map <std::string, ATarget *> _learnt_targets;

        TargetGenerator(TargetGenerator const & src);
        TargetGenerator & operator = (TargetGenerator const & src);

    public:
        TargetGenerator();
        virtual ~TargetGenerator();

        void learnTargetType(ATarget * target);
        void forgetTargetType(std::string const & name);
        ATarget* createTarget(std::string const & name);

};

#endif