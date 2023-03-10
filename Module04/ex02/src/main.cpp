#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j1 = new Cat();
	const Animal* k = new Dog();

	k->makeSound();
	j1->makeSound();
	delete j1;
	delete k;

	const Animal *j[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}

	j[7]->makeSound();
	j[1]->makeSound();
	for(int i = 0; i < 10 ; i++)
	{
		delete j[i];
	}

	const Animal* j2 = new Animal();
	j2->makeSound();

	return (0);
}
