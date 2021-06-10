#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice &copy) : AMateria(copy)
{
}

Ice & Ice::operator=(Ice &op)
{
	if (this == &op)
		return (*this);
	*this = op;
	return (*this);
}

Ice::~Ice()
{
}

AMateria * Ice::clone() const
{
	AMateria *aMateria = new Ice;
	return (aMateria);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<COLOR_RED"*🥶 shoots an ice bolt at 🥶"<<target.getName()<<" *"COLOR_RESET <<std::endl;
}