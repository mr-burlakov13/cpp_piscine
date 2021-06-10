#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy)  : AWeapon(copy)
{

}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &op) {
	AWeapon::operator=(op);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}


void PlasmaRifle::attack() const
{
	std::cout << "*🔫"COLOR_RED<<" babah babah "COLOR_RESET"🔫*" << std::endl;
}