#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const& src);
		virtual ~Cat(void);
		virtual Cat& operator=(Cat const& rhs);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		virtual void setIdea(int id ,std::string message);
		virtual std::string getIdea(int id);

	private:
		Brain* brain;
};

#endif