// SpellBook.hpp
#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    SpellBook(const SpellBook&);
    SpellBook& operator=(const SpellBook&);

    std::map<std::string, ASpell*> m_SpellBook;

public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spellName);
    ASpell* createSpell(const std::string& spellName);
};