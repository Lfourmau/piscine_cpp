#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public :
		//constructors and destructor
		Fixed(void);
		Fixed(Fixed const& src);
		Fixed(const int src);
		Fixed(const float src);
		~Fixed(void);
		//operators
		bool operator<(Fixed const& rhs);
		bool operator>(Fixed const& rhs);
		bool operator>=(Fixed const& rhs);
		bool operator<=(Fixed const& rhs);
		bool operator==(Fixed const& rhs);
		bool operator!=(Fixed const& rhs);
		Fixed& operator=(Fixed const& rhs);
		Fixed operator+(Fixed const& rhs);
		Fixed& operator-(Fixed const& rhs);
		Fixed& operator*(Fixed const& rhs);
		Fixed& operator/(Fixed const& rhs);
		//functions
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;


	private :
		int _fixedValue;
		static const int nbBits = 8;
};
std::ostream& operator<<(std::ostream& out, Fixed const& rhs);

#endif