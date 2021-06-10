#ifndef SORCERER_HPP
# define SORCERER_HPP


#include <iostream>
#include <string>
#include <sstream>
#include "Victim.hpp"

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Sorcerer
{
private:
	std::string m_name;
	std::string m_title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &copy);
	Sorcerer & operator = (const Sorcerer& op); 
	virtual ~Sorcerer();
	std::string get_name() const;
	std::string get_title() const;
	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &fix);
#endif