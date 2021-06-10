#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << COLOR_BLUE"\"I'm a main parent constructore\"🏖" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_BLUE"\"I'm main parent destructor\"💀" << std::endl;	
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	if (m_Energy_points > 9)
	{
		m_Energy_points -= 10;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a bow, while dealing " << m_Ranged_attack_damage << " damage 🔥" <<  std::endl;
	}
	else
		std::cout << "not enough energy (( " << std::endl;
	
}
void	ClapTrap::meleeAttack(std::string const & target)
{
	if (m_Energy_points > 19)
	{
		m_Energy_points -= 20;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a fist dealing " << m_Melee_attack_damage << " damage  🔥" << std::endl;
	}
	else
		std::cout << COLOR_YELLOW << COLOR_RED"not enough energy (("<< std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	m_Hit_points = m_Hit_points - (amount - m_Armor_damage_reduction);
	if (m_Hit_points <= 0)
	{
		m_Hit_points = 0;
		std:: cout << COLOR_YELLOW << m_name << COLOR_RED" will die soon 💀"<< std::endl;
		return ;
	}
	std::cout  << COLOR_YELLOW << m_name <<  COLOR_RED" takes damage 🤕" << amount - m_Armor_damage_reduction << std::endl; 
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	m_Hit_points += amount;
	m_Energy_points += amount;

	if (m_Hit_points > m_Max_hit_points)
	{
		m_Hit_points = m_Max_hit_points;
		std::cout << COLOR_GREEN"Hit points is full"<< std::endl;
	}
	else
		std::cout << COLOR_YELLOW << m_name <<  COLOR_GREEN" regains hit points " << amount << " 💊" << std::endl; 

	if (m_Energy_points > m_Max_energy_points)
	{
		m_Energy_points = m_Max_energy_points;
		std::cout << COLOR_GREEN"Energy is full"<< std::endl;
	}
	else
		std::cout << COLOR_YELLOW << m_name <<  COLOR_GREEN" restored energy " << amount << " ⚡️⚡️" << std::endl; 
}