#include "Peon.hpp"

Peon::Peon(): Victim()
{
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << COLOR_GREEN"Zoog zoog. 🐇"COLOR_RESET << std::endl;
}

Peon::Peon(Peon const &copy) {
	m_name = copy.get_name();
}

Peon & Peon::operator = (const Peon& op)
{
	if (this != &op)
		m_name = op.get_name();
	return (*this);
}

Peon::~Peon()
{
	std::cout << COLOR_RED"Bleuark... 💀"COLOR_RESET << std::endl;
}

void Peon::getPolymorphed() const 
{
	std::cout << COLOR_MAGENTA << m_name << " has been turned into a pink pony! 🐴"COLOR_RESET << std::endl;
}

std::ostream &operator<<(std::ostream &os, Peon const &peo)
{
	os << COLOR_YELLOW"I'm " << peo.get_name() << " and I like others!" << std::endl;
	return os;
}