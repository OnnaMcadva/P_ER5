#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) : m_name(name), m_effects(effects)
{
}

ASpell& ASpell::operator=(const ASpell& rhs)
{
    if (this != &rhs) {
        m_name = rhs.getName();
        m_effects = rhs.getEffects();
    }
    return *this;
}

ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}

ASpell::~ASpell()
{
}

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
