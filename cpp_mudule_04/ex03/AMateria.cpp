#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : m_type(type), m_xp(0)
{
}

AMateria::AMateria(const AMateria &copy) : m_type(copy.m_type), m_xp(copy.m_xp)
{
}

AMateria & AMateria::operator=(const AMateria &op)
{
	if (this == &op)
		return (*this);
	*this = op;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string & AMateria::getType() const
{
	return (m_type);
}

unsigned int AMateria::getXp() const
{
	return m_xp;
}

void AMateria::use(ICharacter &target)
{
	m_xp += 10;
	std::cout<< COLOR_GREEN<< "After applying this element, "
	<<COLOR_BLUE<<target.getName()<<COLOR_GREEN<<" experience became - "
	<<COLOR_RESET<<m_xp<<std::endl;
}