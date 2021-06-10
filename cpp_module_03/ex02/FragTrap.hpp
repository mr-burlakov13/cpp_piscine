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
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string name);
	~FragTrap();

	void	vaulthunter_dot_exe(std::string const & target);

};


#endif
