#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	srand((unsigned) time(0));
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	m_name = name;
	m_Hit_points = 100;
	m_Max_hit_points = 100;
	m_Energy_points = 100;
	m_Max_energy_points = 100;
	m_Level = 1;
	m_Melee_attack_damage = 30;
	m_Ranged_attack_damage = 20;
	m_Armor_damage_reduction = 5;
	srand((unsigned) time(0));
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_BLUE"ordered to destroy all old robots and stop the production line🔫\n";
}

FragTrap::~FragTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_MAGENTA " went to sleep😴\n";
}


int	random_nb()
{
	return (rand() % 5);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string wtf[5] = {"laser", "Banan", "bazooka", "grenade_launcher", "national_guard" };
	if (m_Energy_points > 24)
	{
		m_Energy_points -= 25;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" picked up a " << target << wtf[random_nb()] << " and ai dealt 40 damage 🔥🔥🔥" <<  std::endl;
	}
	else
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" not enough energy ((\n";
}