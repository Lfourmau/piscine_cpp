#ifndef WORNGWrongCat_HPP
# define WORNGWrongCat_HPP

#include "Animal.hpp"

class WrongCat : public Animal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const& src);
		~WrongCat(void);
		WrongCat& operator=(WrongCat const& rhs);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif