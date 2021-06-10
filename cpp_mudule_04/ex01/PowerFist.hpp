#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(PowerFist const &copy);
	PowerFist &operator=(PowerFist const &op);
	virtual ~PowerFist();

	virtual void attack() const;

};


#endif 
