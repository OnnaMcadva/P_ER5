#include "ASpell.hpp"

ASpell::ASpell(const ASpell& obj) :
        m_name(obj.m_name), m_effects(obj.m_effects)
{}
ASpell& ASpell::operator=(const ASpell& rhs)
{
    if (this != &rhs)
    {
        m_name = rhs.getName();
        m_effects = rhs.getEffects();
    }
    return *this;
}
ASpell::ASpell(const std::string& name, const std::string& effects) :
        m_name(name), m_effects(effects)
{}
ASpell::~ASpell()
{}
const std::string& ASpell::getName() const
{
    return m_name;
}
const std::string& ASpell::getEffects() const
{
    return m_effects;
}
void ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}