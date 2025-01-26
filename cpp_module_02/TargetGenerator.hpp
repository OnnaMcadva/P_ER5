#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private :
		TargetGenerator(const TargetGenerator& src);
		TargetGenerator & operator=(const TargetGenerator& src);
		std::map < std::string, ATarget*> m_target;
	public :
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};