#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator=(SuperMutant const &op);
	virtual ~SuperMutant();

	virtual void take_Damage(int damage);

};


#endif
