#include "Jabahut.hpp"
#include <iostream>

Jabahut::Jabahut() : Enemy(100, "Jabahut") {
	std::cout << "ðļI'm the fattest!ðļ" << std::endl;
}

Jabahut::Jabahut(Jabahut const &copy) : Enemy(copy) {

}

Jabahut &Jabahut::operator=(Jabahut const &op) {
	if (this == &op)
		return (*this);

	Enemy::operator=(op);
	return (*this);
}

Jabahut::~Jabahut() {
	std::cout << "*ð I'll be back ð*" << std::endl;
}