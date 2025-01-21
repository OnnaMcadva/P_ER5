#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(const Warlock& obj)
{
    *this = obj;
}

Warlock& Warlock::operator=(const Warlock& rhs)
{
    if (this != &rhs) {
        m_name = rhs.m_name;
        m_title = rhs.m_title;
    }
    return *this;
}

Warlock::Warlock(const std::string& name, const std::string& title) : m_name(name), m_title(title)
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
