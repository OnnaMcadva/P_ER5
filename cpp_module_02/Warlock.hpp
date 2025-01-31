// Warlock.hpp
#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
    Warlock(); // Запрещаем создание объекта без параметров
    Warlock(const Warlock&); // Запрещаем копирование
    Warlock& operator=(const Warlock&); // Запрещаем присваивание

    std::string m_name;
    std::string m_title;
    SpellBook m_SpellBook;

public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();

    const std::string& getName() const;
    const std::string& getTitle() const;
    void setTitle(const std::string& str);
    void introduce() const;

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spellName);
    void launchSpell(const std::string& spellName, const ATarget& target);
};