#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public :
		Fixed(void);
		Fixed(Fixed& src);
		~Fixed(void);
		Fixed& operator=(Fixed& rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int _fixedValue;
		static const int nbBits = 8;
};

#endif