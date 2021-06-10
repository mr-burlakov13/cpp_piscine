#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string m_type;

public:
	ZombieEvent(){;}
	void setZombieType(std::string m_type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();
};






#endif