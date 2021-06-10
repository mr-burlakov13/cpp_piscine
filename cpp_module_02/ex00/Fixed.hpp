#ifndef FIXED_HPP
# define FIXED_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#include <iostream>
#include <string.h>
#include <sstream>

class Fixed
{
private:
	int m_value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed & operator = (const Fixed& op); 
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};




#endif