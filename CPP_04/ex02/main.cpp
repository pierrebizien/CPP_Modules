#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	{
		const AAnimal* j = new Dog();
		// const AAnimal* m = new AAnimal();
		const AAnimal* i = new Cat();
		const AAnimal* k = new Dog();
		std::cout << k << std::endl;
		const AAnimal* l = new Cat();
		const AAnimal* tab[4] = {j, i, k, l};
		std::cout << std::endl << std::endl;


		delete tab[0];
		delete tab[1];
		delete tab[2];
		delete tab[3];
	}
	std::cout << std::endl;
	{
		Dog* j = new Dog();
		Dog* k = new Dog(*j);

		j->setIdea(0, "I'm hungry");
		k->setIdea(0, "I love to run around the house");
		std::cout << j->getIdea(0) << std::endl;
		std::cout << k->getIdea(0) << std::endl;
		delete j;
		delete k;
	}

	return 0;
}