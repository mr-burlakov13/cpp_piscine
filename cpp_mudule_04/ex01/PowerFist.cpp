#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy) {

}

PowerFist &PowerFist::operator=(PowerFist const &op) {
	AWeapon::operator=(op);
	return (*this);
}

PowerFist::~PowerFist() {

}

void PowerFist::attack() const {
	std::cout << "*👊"COLOR_RED<<" pschhh... SBAM! "COLOR_RESET"👊*" << std::endl;
}
