#include "Brain.hpp"
#include <typeinfo>
Brain::Brain()
{
	long adr = (long)this;
	std::stringstream adr_ss;
	adr_ss << "0x" << std::uppercase << std::hex << adr;
	m_adress = adr_ss.str();
}

Brain::~Brain()
{
	
}

std::string Brain::identify() 
{
	return (m_adress);
}