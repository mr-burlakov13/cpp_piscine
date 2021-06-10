#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	srand((unsigned) time(0));
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
:
	m_Hit_points(100),
	m_Max_hit_points(100),
	m_Energy_points(100),
	m_Max_energy_points(100),
	m_Level(1),
	m_name(name),
	m_Melee_attack_damage(30),
	m_Ranged_attack_damage(20),
	m_Armor_damage_reduction(5)
{
	srand((unsigned) time(0));
	std::cout << COLOR_YELLOW << m_name << " said: "COLOR_RED"\"ordered to destroy all old robots and stop the production line\"🔫\n";
}

FragTrap::~FragTrap()
{
	std::cout << COLOR_YELLOW  << m_name << COLOR_MAGENTA " went to sleep😴\n";
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (m_Energy_points > 9)
	{
		m_Energy_points -= 10;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a bow, while dealing " << m_Ranged_attack_damage << " damage 🔥" <<  std::endl;
	}
	else
		std::cout << "not enough energy ((\n";
	
}
void	FragTrap::meleeAttack(std::string const & target)
{
	if (m_Energy_points > 19)
	{
		m_Energy_points -= 20;
		std::cout << COLOR_YELLOW << m_name << COLOR_RED" hits the " << target << " with a fist dealing " << m_Melee_attack_damage << " damage  🔥" << std::endl;
	}
	else
		std::cout << COLOR_YELLOW << COLOR_RED"not enough energy ((\n";
}
void	FragTrap::takeDamage(unsigned int amount)
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
void	FragTrap::beRepaired(unsigned int amount)
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