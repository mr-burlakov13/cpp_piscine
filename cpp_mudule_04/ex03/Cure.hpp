#ifndef MODULE04_CURE_HPP
#define MODULE04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	Cure &operator=(Cure &op);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};


#endif
