#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "---------Subject tests---------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	delete tmp;
	std::cout << "---------Clone test---------" << std::endl;
	Ice materia;
	std::cout << "Base materia is : " <<  materia.getType() << std::endl;
	AMateria *cloned;
	cloned = materia.clone();
	std::cout << "Cloned materia is : " << cloned->getType() << std::endl;
	delete cloned;
	return 0;
}