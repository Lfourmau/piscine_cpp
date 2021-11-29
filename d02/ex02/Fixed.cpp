#include "Fixed.hpp"

//constructors
Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}
Fixed::Fixed(Fixed const& src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::Fixed(const int src)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = src << nbBits;
}
Fixed::Fixed(const float src)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(((src * (1 << nbBits))));
}
//destructor
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

//Arithmetc operators
Fixed& Fixed::operator=(Fixed const& rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = rhs.getRawBits();
	return (*this);
}
Fixed Fixed::operator+(Fixed const& rhs) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fixedValue + rhs.getRawBits());
	return (tmp);
}
Fixed Fixed::operator*(Fixed const& rhs) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fixedValue * rhs.toFloat());
	return (tmp);
}
Fixed Fixed::operator-(Fixed const& rhs) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fixedValue - rhs.getRawBits());
	return (tmp);
}
Fixed Fixed::operator/(Fixed const& rhs) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fixedValue / rhs.toFloat());
	return (tmp);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++this->_fixedValue;
  	return tmp;
}
Fixed& Fixed::operator++(void)
{
	this->_fixedValue++;
  	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--this->_fixedValue;
  	return tmp;
}
Fixed& Fixed::operator--(void)
{
	this->_fixedValue--;
  	return (*this);
}

//output operator
std::ostream& operator<<(std::ostream& out, Fixed const& rhs)
{
	out << rhs.toFloat();
	return (out);
}


//Comparison operators
bool Fixed::operator<(Fixed const& rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}
bool Fixed::operator>(Fixed const& rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const& rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const& rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const& rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const& rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
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
Fixed& Fixed::min(Fixed& val1, Fixed& val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}
Fixed& Fixed::max(Fixed& val1, Fixed& val2)
{
	if (val1 > val2)
		return (val1);
	return (val2);
}
Fixed const& Fixed::min(Fixed const& val1, Fixed const& val2)
{
	Fixed value1 = val1;
	Fixed value2 = val2;
	if (value1 < value2)
		return (val1);
	return (val2);
}
Fixed const& Fixed::max(Fixed const& val1, Fixed const& val2)
{
	Fixed value1 = val1;
	Fixed value2 = val2;
	if (value1 > value2)
		return (val1);
	return (val2);
}
