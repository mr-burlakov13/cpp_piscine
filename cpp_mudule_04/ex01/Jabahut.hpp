

#ifndef JABAHUT_HPP
#define JABAHUT_HPP

#include "Enemy.hpp"

class Jabahut : public Enemy {
public:
	Jabahut();
	Jabahut(Jabahut const &other);
	Jabahut &operator=(Jabahut const &other);
	virtual ~Jabahut();

};


#endif
