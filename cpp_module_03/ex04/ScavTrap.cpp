#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	srand((unsigned) time(0));
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	m_name = name;
	m_Hit_points = 100;
	m_Max_hit_points = 100;
	m_Energy_points = 50;
	m_Max_energy_points = 50;
	m_Level = 1;
	m_Melee_attack_damage = 20;
	m_Ranged_attack_damage = 15;
	m_Armor_damage_reduction = 3;
	
	srand((unsigned) time(0));
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_RED"\"I came to this world to learn how to dig potatoes\"🥔\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_CYAN " got tired of fighting and left for his girlfriend🤪\n";
}

int	random_nb1()
{
	return (rand() % 5);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string wtf[5] = {"oreh", "palka", "krokodil", "Davlet", "potato" };
	if (m_Energy_points > 24)
	{
		m_Energy_points -= 25;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" picked up a " << target << wtf[random_nb1()] << " and ai dealt 30 damage 🔥🔥🔥" <<  std::endl;
	}
	else
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" not enough energy ((\n";
}
