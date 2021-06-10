#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	m_name = name;
}

void	HumanB::setWeapon(Weapon &club)
{
	m_pushka = &club;
}

void	HumanB::attack()
{
	std::cout << COLOR_CYAN << m_name << COLOR_RED" attacks with his " << COLOR_YELLOW << m_pushka->getType() << std::endl;
}