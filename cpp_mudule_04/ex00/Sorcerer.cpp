#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer()
{
}


Sorcerer::Sorcerer(std::string name, std::string title)
:
m_name(name),
m_title(title)
{
	std::cout << COLOR_GREEN << m_name << ", " << m_title << ", "  << "is born! 🔥"COLOR_RESET << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title << ", " COLOR_RED"is dead."COLOR_RESET"💀 Consequences will never be the same!🎃" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy) {
	m_name = copy.get_name();
	m_title = copy.get_title();
}

Sorcerer &Sorcerer::operator = (const Sorcerer& op)
{
	if (this != &op)
	{
		m_name = op.get_name();
		m_title = op.get_title();
	}
	return (*this);
}

std::string Sorcerer::get_name() const
{
	return m_name;
}

std::string Sorcerer::get_title() const
{
	return m_title;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}


std::ostream &operator << (std::ostream &os, Sorcerer const &mag)
{
	os << COLOR_YELLOW"I am " << mag.get_name() << ", " << mag.get_title() << ", and I like ponies!" << std::endl;
	return (os);
}
