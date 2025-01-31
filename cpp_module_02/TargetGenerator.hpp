// TargetGenerator.hpp
#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    TargetGenerator(const TargetGenerator&); // Запрещаем копирование
    TargetGenerator& operator=(const TargetGenerator&); // Запрещаем присваивание

    std::map<std::string, ATarget*> m_target;

public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(const std::string& targetType);
    ATarget* createTarget(const std::string& targetType);
};