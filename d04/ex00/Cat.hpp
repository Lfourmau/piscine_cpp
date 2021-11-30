#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const& src);
		~Cat(void);
		Cat& operator=(Cat const& rhs);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif