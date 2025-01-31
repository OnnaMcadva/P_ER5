// TargetGenerator.cpp
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget*>::iterator it = m_target.begin(); it != m_target.end(); ++it)
    {
        delete it->second;
    }
    m_target.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target && m_target.find(target->getType()) == m_target.end())
    {
        m_target[target->getType()] = target->clone();
    }
}

void TargetGenerator::forgetTargetType(const std::string& targetType)
{
    if (m_target.find(targetType) != m_target.end())
    {
        delete m_target[targetType];
        m_target.erase(targetType);
    }
}

ATarget* TargetGenerator::createTarget(const std::string& targetType)
{
    if (m_target.find(targetType) != m_target.end())
    {
        return m_target[targetType]->clone();
    }
    return NULL;
}

