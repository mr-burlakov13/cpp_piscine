#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <string>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Character {
private:
	std::string m_name;
	int m_ap;
	AWeapon *m_weapon;

public:
	Character();
	Character(std::string const & name);
	Character(Character const &copy);
	Character &operator=(Character const &op);
	virtual ~Character();

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const &get_name() const;
	int get_Ap() const;
	AWeapon *get_Weapon() const;
};

std::ostream &operator<<(std::ostream &stream, Character const &character);

#endif
