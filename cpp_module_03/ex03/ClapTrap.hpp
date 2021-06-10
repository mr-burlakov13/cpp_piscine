#ifndef CLABTRAP_HPP
# define CLABTRAP_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#include <iostream>
#include <string.h>
#include <sstream>

class ClapTrap
{
protected:
	int m_Hit_points;
	int	m_Max_hit_points;
	int m_Energy_points;
	int m_Max_energy_points;
	int m_Level;
	std::string m_name;
	int m_Melee_attack_damage;
	int m_Ranged_attack_damage;
	int m_Armor_damage_reduction;	
	ClapTrap();
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif
