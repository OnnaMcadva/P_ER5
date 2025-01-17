#pragma once
#include <iostream>

class Warlock {

private:
    Warlock();
    Warlock(const Warlock& obj);
    Warlock& operator=(const Warlock& rhs);
    std::string m_name;
    std::string m_title;

public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    const std::string& getName() const;
    const std::string& getTitle() const;
    void setTitle(const std::string& str);
    void introduce() const;
};
