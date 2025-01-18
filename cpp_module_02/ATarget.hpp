#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
protected:
    std::string m_type;

public:
    ATarget(const std::string& type);
    ATarget& operator=(const ATarget& rhs);
    ATarget(const ATarget& obj);
    virtual ~ATarget();
    const std::string& getType() const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell& spell) const;
};
