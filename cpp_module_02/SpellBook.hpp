#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
	private :
		SpellBook(const SpellBook& src);
		SpellBook & operator=(const SpellBook& src);
		std::map < std::string, ASpell*> m_SpellBook;
	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};