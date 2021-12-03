#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const& src);
		MateriaSource& operator=(MateriaSource& rhs);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria *materiaSource[4];
		int _slot;
		void inc_slot(void);
};

#endif