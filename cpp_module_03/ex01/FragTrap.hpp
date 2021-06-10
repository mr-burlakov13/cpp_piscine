#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

class FragTrap
{
private:
	int m_Hit_points;
	int	m_Max_hit_points;
	int m_Energy_points;
	int m_Max_energy_points;
	int m_Level;
	std::string m_name;
	int m_Melee_attack_damage;
	int m_Ranged_attack_damage;
	int m_Armor_damage_reduction;
	FragTrap();
public:
	FragTrap(std::string name);
	~FragTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

};


#endif
