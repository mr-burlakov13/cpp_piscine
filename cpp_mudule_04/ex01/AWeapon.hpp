#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>
# include <sstream>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class AWeapon
{
private:
	std::string m_name;
	int m_apcost;
	int m_damage;
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &copy);
	AWeapon & operator = (const AWeapon& op); 
	virtual ~AWeapon();

	std::string  const &get_name() const;
	int get_APCost() const;
	int get_Damage() const;
	virtual void attack() const = 0;
};



#endif
