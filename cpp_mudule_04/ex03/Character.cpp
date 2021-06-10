#include "Character.hpp"

 Character::Character(const std::string &name) : m_name(name), m_idx(0), m_pool()
 {
	for(int i = 0; i < 4; m_pool[i++] = nullptr);
 }

 Character::Character(const Character &copy) : m_name(copy.m_name), m_idx(copy.m_idx), m_pool()
 {
	for (int i = 0; i < 4; i++)
		m_pool[i] = copy.m_pool[i];
 }

 Character & Character::operator=(const Character &op)
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

	m_name = op.m_name;
	return (*this);
 }

 Character::~Character()
 {
	 for (int i = 0; i < 4; i++)
		delete m_pool[i];
 }

const std::string &Character::getName() const
{
	return (m_name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; m_pool[i++] != nullptr; m_idx++);
		if (m_pool[m_idx] == nullptr)
			m_pool[m_idx] = m;
	}
}

void Character::unequip(int m_idx)
{
	if (m_pool[m_idx])
	{
		m_pool[m_idx] = nullptr;
 	}
}

void Character::use(int idx, ICharacter &target)
{
	if (m_pool[idx] && &target != this)
	{
		m_pool[idx]->use(target);
	}
}
