#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << COLOR_GREEN"Copy constructor called" << std::endl;
	m_value = a.getRawBits();
};

Fixed::~Fixed()
{
	std::cout << COLOR_CYAN"Destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed& op)
{
	std::cout << COLOR_GREEN"Assignation operator called" << std::endl;
	if (this!= &op)
		m_value = op.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << COLOR_YELLOW"getRawBits member function called"COLOR_RESET << std::endl;
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}