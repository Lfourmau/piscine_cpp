#ifndef WORNGWrongCat_HPP
# define WORNGWrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const& src);
		~WrongCat(void);
		WrongCat& operator=(WrongCat const& rhs);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif