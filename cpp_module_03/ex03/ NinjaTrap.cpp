#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	srand((unsigned) time(0));
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	m_name = name;
	m_Hit_points = 60;
	m_Max_hit_points = 60;
	m_Energy_points = 120;
	m_Max_energy_points = 120;
	m_Level = 1;
	m_Melee_attack_damage = 60;
	m_Ranged_attack_damage = 5;
	m_Armor_damage_reduction = 0;
	srand((unsigned) time(0));
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_MAGENTA"i came to become hokage 🔵\n";
}


NinjaTrap::~NinjaTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_MAGENTA " left Konoha 🚝" << std::endl;
}



int	random_nb11()
{
	return (rand() % 100);
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (random_nb11() > 50)
		trap.vaulthunter_dot_exe("Naruto ");
	else
		trap.meleeAttack("Naruto ");
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (random_nb11() > 50)
		trap.challengeNewcomer("Naruto ");
	else
		trap.rangedAttack("Naruto ");
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (random_nb11() > 50)
		trap.meleeAttack("Naruto ");
	else
		trap.rangedAttack("Naruto ");
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (random_nb11() > 50)
		trap.meleeAttack("Naruto ");
	else
		trap.rangedAttack("Naruto ");
}