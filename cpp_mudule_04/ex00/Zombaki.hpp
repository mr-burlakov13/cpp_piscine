#ifndef ZOMBAKI_HPP
# define ZOMBAKI_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Victim.hpp"

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Zombak : public Victim
{
private:
	Zombak();
public:
	Zombak(std::string name);
	Zombak(Zombak const &copy);
	Zombak & operator = (const Zombak& op); 
	virtual ~Zombak();

	virtual void getPolymorphed() const ;
};

std::ostream &operator<<(std::ostream &os, Zombak const &zom);

#endif