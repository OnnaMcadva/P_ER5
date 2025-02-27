// SpellBook.cpp
#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    // for (std::map<std::string, ASpell*>::iterator it = m_SpellBook.begin(); it != m_SpellBook.end(); ++it)
    // {
    //     delete it->second;
    // }
    // m_SpellBook.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell && m_SpellBook.find(spell->getName()) == m_SpellBook.end())
    {
        m_SpellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(const std::string& spellName)
{
    if (m_SpellBook.count(spellName))
    {
        delete m_SpellBook[spellName];
        m_SpellBook.erase(spellName);
    }
}

ASpell* SpellBook::createSpell(const std::string& spellName)
{
    if (m_SpellBook.count(spellName))
    {
        return m_SpellBook[spellName]->clone();
    }
    // if (m_SpellBook.find(spellName) != m_SpellBook.end())
    // {
    //     return m_SpellBook[spellName]->clone();
    // }
    return NULL;
}