#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	srand((unsigned) time(0));
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:
	m_Hit_points(100),
	m_Max_hit_points(100),
	m_Energy_points(50),
	m_Max_energy_points(50),
	m_Level(1),
	m_name(name),
	m_Melee_attack_damage(20),
	m_Ranged_attack_damage(15),
	m_Armor_damage_reduction(3)
{
	srand((unsigned) time(0));
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_RED"\"I came to this world to learn how to dig potatoes\"🥔\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_CYAN " got tired of fighting and left for his girlfriend🤪\n";
}


void	ScavTrap::rangedAttack(std::string const & target)
{
	if (m_Energy_points > 9)
	{
		m_Energy_points -= 10;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a bow, while dealing " << m_Ranged_attack_damage << " damage 🔥" <<  std::endl;
	}
	else
		std::cout << "not enough energy ((\n";
	
}
void	ScavTrap::meleeAttack(std::string const & target)
{
	if (m_Energy_points > 19)
	{
		m_Energy_points -= 20;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a fist dealing " << m_Melee_attack_damage << " damage  🔥" << std::endl;
	}
	else
		std::cout << COLOR_YELLOW << COLOR_RED"not enough energy ((\n";
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	m_Hit_points = m_Hit_points - (amount - m_Armor_damage_reduction);
	if (m_Hit_points <= 0)
	{
		m_Hit_points = 0;
		std:: cout << COLOR_YELLOW << m_name << COLOR_RED" will die soon 💀\n";
		return ;
	}
	std::cout  << COLOR_YELLOW << m_name <<  COLOR_RED" takes damage 🤕" << amount - m_Armor_damage_reduction << std::endl; 
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	m_Hit_points += amount;
	m_Energy_points += amount;

	if (m_Hit_points > m_Max_hit_points)
	{
		m_Hit_points = m_Max_hit_points;
		std::cout << COLOR_GREEN"Hit points is full\n";
		return ;
	}
	if (m_Energy_points > m_Max_energy_points)
	{
		m_Energy_points = m_Max_energy_points;
		std::cout << COLOR_GREEN"Energy is full\n";
		return ;
	}

	std::cout << COLOR_YELLOW << m_name <<  COLOR_GREEN" regains hit points " << amount << " 💊" << std::endl; 
	std::cout << COLOR_YELLOW << m_name <<  COLOR_GREEN" restored energy " << amount << " ⚡️⚡️" << std::endl; 
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
