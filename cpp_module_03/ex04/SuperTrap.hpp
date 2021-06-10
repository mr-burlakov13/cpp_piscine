#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

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
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap();
	public:
		SuperTrap(std::string name);
		~SuperTrap();
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};


#endif