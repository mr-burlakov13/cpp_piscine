#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << COLOR_GREEN"Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb_int) : m_value(nb_int << m_bits)
{
	std::cout << COLOR_GREEN"Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb_float): m_value((int)(roundf(nb_float * (1 << m_bits))))
{
    std::cout << COLOR_GREEN"Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << COLOR_GREEN"Copy constructor called" << std::endl;
	m_value = copy.getRawBits();
};

Fixed::~Fixed()
{
	std::cout << COLOR_MAGENTA"Destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed& op)
{
    std::cout << COLOR_GREEN"Assignation operator called" << std::endl;
    if (this != &op)
        m_value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)m_value / (float)(1 << m_bits));
}

int Fixed::toInt (void) const
{
	return ((int)(m_value >> m_bits));
}

std::ostream &operator << (std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return (os);
}