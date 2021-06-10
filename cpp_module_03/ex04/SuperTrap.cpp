#include "SuperTrap.hpp"


SuperTrap::SuperTrap(std::string name):
	  FragTrap(name), NinjaTrap(name)
{
	m_name = name;
	m_Hit_points = FragTrap::m_Hit_points;
	m_Max_hit_points = FragTrap::m_Max_hit_points; 
	m_Energy_points = NinjaTrap::m_Energy_points;
	m_Max_energy_points = NinjaTrap::m_Energy_points;
	m_Level = 1;
	m_Melee_attack_damage = NinjaTrap::m_Melee_attack_damage;
	m_Ranged_attack_damage = FragTrap::m_Ranged_attack_damage;
	m_Armor_damage_reduction = FragTrap::m_Armor_damage_reduction;
	
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_BLUE"I am a multiple descendant of my glorious ancestors🐩" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_CYAN " defeated everyone. i can relax🌚" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}