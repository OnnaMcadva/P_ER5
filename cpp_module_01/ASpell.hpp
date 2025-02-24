#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected : 
        std::string m_name;
        std::string m_effects;

    public :
        ASpell(const ASpell& obj);
        ASpell& operator=(const ASpell& rhs);
        ASpell(const std::string& name, const std::string& effects);
        virtual ~ASpell();
        const std::string& getName() const;
        const std::string& getEffects() const;
        virtual ASpell* clone() const = 0;
        void launch(const ATarget& target) const;
};