// Created by Onur Dursun on 12/26/22.

#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << i << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();

		std::cout << j;
		std::cout << meta;

		j->makeSound();
		meta->makeSound();

		delete j;
		delete meta;
	}
	//system("leaks poly");
	return (0);
}
