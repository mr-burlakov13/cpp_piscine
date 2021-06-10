#include "Squad.hpp"
#include <stddef.h>

Squad::Squad() : m_count(0), m_units(NULL) {

}

Squad::Squad(Squad const &copy) : m_count(0), m_units(NULL) {
	*this = copy;
}

Squad &Squad::operator=(Squad const &op) {
	if (this == &op)
		return (*this);

	for (int i = 0; i < m_count; i++)
		delete m_units[i];
	delete [] m_units;

	m_count = op.m_count;
	if (m_count > 0)
	{
		m_units = new ISpaceMarine *[m_count];
		for (int i = 0; i < m_count; i++)
			m_units[i] = op.m_units[i]->clone();
	}
	else
		m_units = NULL;
	return (*this);
}

Squad::~Squad() {
	for (int i = 0; i < m_count; i++)
		delete m_units[i];
	delete [] m_units;
}

int Squad::getCount() const {
	return (m_count);
}

ISpaceMarine *Squad::getUnit(int i) const {
	return (m_units[i]);
}

int Squad::push(ISpaceMarine *unit) {
	if (!unit)
		return (m_count);

	for (int i = 0; i < m_count; i++)
	{
		if (m_units[i] == unit)
			return (m_count);
	}

	ISpaceMarine **units = new ISpaceMarine *[m_count + 1];

	for (int i = 0; i < m_count; i++)
		units[i] = m_units[i];

	units[m_count] = unit;
	m_count++;
	delete [] m_units;
	m_units = units;
	return (m_count);
}
