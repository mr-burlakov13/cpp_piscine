#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle &operator=(PlasmaRifle const &op);
	virtual ~PlasmaRifle();

	virtual void attack() const;
};



#endif