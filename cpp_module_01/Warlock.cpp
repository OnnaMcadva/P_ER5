#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
    : m_name(name), m_title(title)
{
    std::cout << m_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    // // Удаляем все заклинания из книги
    // for (std::map<std::string, ASpell*>::iterator it = m_SpellBook.begin(); it != m_SpellBook.end(); ++it)
    // {
    //     delete it->second;
    // }
    // m_SpellBook.clear();
    std::cout << m_name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
    return m_name;
}

const std::string& Warlock::getTitle() const
{
    return m_title;
}

void Warlock::setTitle(const std::string& str)
{
    m_title = str;
}

void Warlock::introduce() const
{
    std::cout << m_name << ": I am " << m_name << ", " << m_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell && m_SpellBook.find(spell->getName()) == m_SpellBook.end())
    {
        m_SpellBook[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(const std::string& spellName)
{
    if (m_SpellBook.count(spellName))
    {
        delete m_SpellBook[spellName];
        m_SpellBook.erase(spellName);
    }
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
    if (m_SpellBook.count(spellName))
    {
        m_SpellBook[spellName]->launch(target);
    }
}
