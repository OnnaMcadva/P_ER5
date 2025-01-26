#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(const TargetGenerator& src)
{
	*this = src;
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator& src)
{
	m_target = src.m_target;
	return (*this);
}


TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
	{
		m_target[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
	if (m_target.find(target) != m_target.end())
		m_target.erase(m_target.find(target));
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
	ATarget* tmp = NULL;
	if (m_target.find(target) != m_target.end())
		tmp = m_target[target];
	return (tmp);
}