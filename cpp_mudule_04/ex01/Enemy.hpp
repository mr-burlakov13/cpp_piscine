#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Enemy
{
private:
	int m_hp;
	std::string m_type;

public:
	Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	Enemy &operator=(Enemy const &op);
	virtual ~Enemy();

	std::string const &get_Type() const;
	int get_Hp() const;
	virtual void take_Damage(int damage);
};


#endif
