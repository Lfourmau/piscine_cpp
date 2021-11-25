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
	//do stuff
}
Fixed::Fixed(const float src)
{
	//do stuff
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
	out << rhs.getRawBits();
	return (out);
}


//accessors
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}


//operations
float Fixed::toFloat(void) const
{
	//do stuff
}

int Fixed::toInt(void) const
{
	//do stuff
}
static const int nbBits = 8;