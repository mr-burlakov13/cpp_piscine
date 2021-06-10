#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &m_pushka) : m_pushka(m_pushka)
{
	m_name = name;
}

void	HumanA::attack() const
{
	std::cout << COLOR_GREEN << m_name << COLOR_RED" attacks with his " << COLOR_YELLOW << m_pushka.getType() << std::endl;
}