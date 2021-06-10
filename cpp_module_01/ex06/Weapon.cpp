#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	m_type = type;
}

void	Weapon::setType(std::string str)
{
	m_type = str;
}

std::string const &Weapon::getType()
{
	return (m_type);
}
