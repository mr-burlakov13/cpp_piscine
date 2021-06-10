#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
}

Cure & Cure::operator=(Cure &op)
{
	if (this == &op)
		return (*this);
	*this = op;
	return (*this);
}

Cure::~Cure()
{
}

AMateria * Cure::clone() const
{
	AMateria *aMateria = new Cure;
	return (aMateria);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout<<COLOR_RED"*💊 heals "<<target.getName()<<" wounds 💊*"<<COLOR_RESET<<std::endl;
}