

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "*🦂" << COLOR_YELLOW"click click click"<<COLOR_RESET "🦂*" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy) {

}

RadScorpion &RadScorpion::operator=(RadScorpion const &op) {
	Enemy::operator=(op);
	return (*this);
}

RadScorpion::~RadScorpion() {
	std::cout << "*💀 SPROTCH 💀*" << std::endl;
}