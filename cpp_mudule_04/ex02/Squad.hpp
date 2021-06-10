#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
	int m_count;
	ISpaceMarine **m_units;
public:
	Squad();
	Squad(Squad const &copy);
	Squad &operator=(Squad const &op);
	virtual ~Squad();

	virtual int getCount() const;
	virtual ISpaceMarine *getUnit(int) const;
	virtual int push(ISpaceMarine *);

};


#endif 
