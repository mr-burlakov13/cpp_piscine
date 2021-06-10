#ifndef MODULE04_MATERIASOURCE_HPP
#define MODULE04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*m_pool[4];
	int			m_idx;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &op);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif
