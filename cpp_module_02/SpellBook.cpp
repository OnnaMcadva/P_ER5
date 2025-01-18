#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const & src)
{
	*this = src;
}

SpellBook & SpellBook::operator=(SpellBook const & src)
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

ASpell* SpellBook::createSpell(std::string const &SpellName)
{
	ASpell* tmp = NULL;
	if (m_SpellBook.find(SpellName) != m_SpellBook.end())
		tmp = m_SpellBook[SpellName];
	return (tmp);
}

