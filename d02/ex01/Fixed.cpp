#include "Fixed.hpp"

//constructors
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}
Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(src);
}
Fixed::Fixed(const int src)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = src << nbBits;
}
Fixed::Fixed(const float src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(((src * (1 << nbBits))));
}
//destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


//operators
Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = rhs.getRawBits();
	return (*this);
}
std::ostream& operator<<(std::ostream& out, Fixed const& rhs)
{
	out << rhs.toFloat();
	return (out);
}


//accessors
int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}
void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}


//operations
float Fixed::toFloat(void) const
{
	return(((float)(this->_fixedValue)) / (1 << nbBits));
}
int Fixed::toInt(void) const
{
	return(this->_fixedValue >> nbBits);
}
