#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>
# include <sstream>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class  Victim
{
protected:
	std::string m_name;
public:
	Victim();
	Victim(std::string name);
	Victim(Victim const &copy);
	Victim & operator = (const Victim& op);
	virtual ~Victim();
	std::string get_name() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Victim const &vic);

#endif