#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook& src)
{
	*this = src;
}

SpellBook & SpellBook::operator=(const SpellBook& src)
{
	m_SpellBook = src.m_SpellBook;
	return (*this);
}

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		m_SpellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(std::string const & SpellName)
{
	if (m_SpellBook.find(SpellName) != m_SpellBook.end())
		m_SpellBook.erase(m_SpellBook.find(SpellName));
}

ASpell* SpellBook::createSpell(const std::string& SpellName)
{
    ASpell* tmp = NULL;
    std::map<std::string, ASpell*>::iterator it = m_SpellBook.find(SpellName);
    if (it != m_SpellBook.end()) {
        tmp = it->second;
    }
    return tmp;
}
