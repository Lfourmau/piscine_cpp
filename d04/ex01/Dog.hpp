#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const& src);
		virtual ~Dog(void);
		Dog& operator=(Dog const& rhs);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		virtual void setIdea(int id ,std::string message);
		virtual std::string getIdea(int id);

	private:
		Brain* brain;
};

#endif