#include "Warlock.hpp"

        Warlock::Warlock()
        {}
        Warlock::Warlock(const Warlock& obj)
        {
            *this = obj;
        }
        Warlock& Warlock::operator=(const Warlock& rhs)
        {
            if (this != &rhs)
            {
                m_name = rhs.m_name;
                m_title = rhs.m_title;
                m_SpellBook = rhs.m_SpellBook;
            }
            return *this;
        }
        Warlock::Warlock(const std::string& name, const std::string& title) : m_name(name) , m_title(title)
        {
            std::cout << m_name << ": This looks like another boring day." << std::endl;
        }
        Warlock::~Warlock()
        {
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
                m_SpellBook.insert(std::make_pair(spell->getName(), spell->clone()));
            }
        }
        void Warlock::forgetSpell(const std::string& SpellName)
        {
            std::map<std::string, ASpell*>::iterator it = m_SpellBook.find(SpellName);
            if (it != m_SpellBook.end())
            {
                delete it->second;
                m_SpellBook.erase(it);
            }
        }
        void Warlock::launchSpell(const std::string& SpellName, const ATarget& target)
        {
            std::map<std::string, ASpell*>::iterator it = m_SpellBook.find(SpellName);
            if (it != m_SpellBook.end())
            {
                it->second->launch(target);
            }
        }