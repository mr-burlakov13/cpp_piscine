#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void	challengeNewcomer(std::string const & target);
};

#endif