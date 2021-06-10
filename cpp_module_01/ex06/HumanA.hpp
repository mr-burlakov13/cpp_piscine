#ifndef HUMANA_HPP
# define HUMANA_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon &m_pushka;
	std::string m_name;
public:
	HumanA(std::string name, Weapon &m_pushka);
	void	attack() const;
};

#endif