#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}

Fixed::Fixed(Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(src);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}