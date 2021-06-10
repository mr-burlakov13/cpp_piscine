#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :  m_pool(), m_idx(0)
{
	for(int i = 0; i < 4; m_pool[i++] = nullptr);
}

MateriaSource::MateriaSource(const MateriaSource &copy) : m_pool(),  m_idx(copy.m_idx)
{
	for (int i = 0; i < 4; i++)
		m_pool[i] = copy.m_pool[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource &op)
{
	if (this == &op)
		return (*this);

	for (int i = 0; i < 4; i++)
		delete m_pool[i];

	for (int i = 0; i < 4; i++)
	{
		if (op.m_pool[i])
			m_pool[i] = op.m_pool[i]->clone();
		else
			m_pool[i] = NULL;
	}

	return (*this);
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	while(i++ < 3)
	{
		if (m_pool[i] != nullptr)
			delete m_pool[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m)
	{
		int i = -1;
		while (i++ < 4)
		{
			if (m_pool[i] == nullptr)
			{
				m_pool[i] = m;
				m_idx = i;
				break;
			}
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	int i = -1;
	while (i++ < m_idx)
	{
		if (m_pool[i]->getType() == type)
		{
			AMateria *aMateria = m_pool[i]->clone();
			return (aMateria);
		}
	}
	return (nullptr);
}
