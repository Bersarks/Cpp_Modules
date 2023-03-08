#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Cat();
	const Animal* k = new Dog();

	delete j;
	delete k;

	const Animal* j[10];
	for (i = 0; i < 10; i++)
	{
		if (i < 5)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}

	std::out << j[1].makeSound() << std::endl;
	std::out << j[7].makeSound() << std::endl;
		return (0);
}
