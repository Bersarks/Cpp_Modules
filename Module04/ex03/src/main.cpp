<<<<<<< HEAD
#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *me);
	me->unequip(0);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *me);
	me->unequip(10);

	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	bob->unequip(0);
	bob->use(0, *me);
	bob->unequip(1);
	bob->use(0,*me);
	bob->unequip(2);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	bob->unequip(3);
	bob->unequip(1);
	bob->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
=======
#include <iostream>
#include "../inc/Character.hpp"
#include "../interface/ICharacter.hpp"
#include "../interface/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *me);
	me->use(1, *me);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
