#include "Victim.hpp"

Victim:: Victim()
{
}

Victim:: Victim(std::string name):m_name(name)
{
	std::cout << COLOR_GREEN"Some random victim called " << m_name <<  " just appeared! 👨‍"COLOR_RESET << std::endl;
}

Victim::Victim(Victim const &copy) {
	m_name = copy.get_name();
}


Victim & Victim::operator = (const Victim& op)
{
	if (this != &op)
		m_name = op.get_name();
	return (*this);
}


Victim::~ Victim()
{
	std::cout << "Victim "<<  m_name <<  " just "<< COLOR_RED"died "COLOR_RESET << "for no apparent reason! 💀" << std::endl;
}

std::string Victim::get_name() const
{
	return m_name;
}


void Victim::getPolymorphed() const
{
	std::cout << COLOR_MAGENTA << m_name << " has been turned into a cute little sheep! 🐑" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &vic)
{
	os << COLOR_YELLOW"I'm " << vic.get_name() << " and I like otters!" << std::endl;
	return os;
}