#include "Zombaki.hpp"



Zombak::Zombak()
{
}


Zombak::Zombak(std::string name): Victim(name)
{
	std::cout << COLOR_GREEN"Braiiiiiiinnnssss... 🧟‍♂️"COLOR_RESET << std::endl;
}

Zombak::Zombak(Zombak const &copy){
	m_name = copy.get_name();
}


Zombak & Zombak::operator = (const Zombak& op)
{
	if (this != &op)
		m_name = op.get_name();
	return (*this);
}


Zombak::~Zombak()
{
	std::cout << COLOR_RED"ooh oh oh ayah ayah💀"COLOR_RESET << std::endl;
}

void Zombak::getPolymorphed() const 
{
	std::cout << COLOR_MAGENTA << m_name << " has been turned into a zombi gerl! 🧟‍♀️" << std::endl;
}


std::ostream &operator<<(std::ostream &os, Zombak const &zom)
{
	os << COLOR_YELLOW"I'm " << zom.get_name() << " and I like others!" << std::endl;
	return os;
}