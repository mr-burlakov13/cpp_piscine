#ifndef MODULE04_AMATERIA_HPP
#define MODULE04_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#define COL_RES	"\x1b[0m"

class ICharacter;

class AMateria
{
private:
	std::string		m_type;
	unsigned int	m_xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &aMateria);
	AMateria &operator=(AMateria const &aMateria);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXp() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
