#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource {
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const& src);
		MateriaSource& operator=(MateriaSource& src);

	private:
};

#endif