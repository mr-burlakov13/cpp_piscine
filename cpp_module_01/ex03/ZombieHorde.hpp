#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

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

class ZombieHorde
{
private:
	Zombie *m_zomb;
	std::string m_type;
	int		m_n;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	random_zombi(Zombie& new_zomb);
	void	announce_all();
};



#endif