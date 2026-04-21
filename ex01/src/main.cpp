#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"

void	waitForUser(std::string message)
{
	std::cout << "\n" << message << std::endl;
	std::cout << "press ENTER to continue..." << std::endl;
	std::cin.get();
}

static void	allocateCatsAndDogs(Animal* catsAndDogs[100])
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		if (i < 50)
			catsAndDogs[i] = new Cat;
		else
			catsAndDogs[i] = new Dog;
	}

}

static void	destroyCatsAndDogs(Animal* catsAndDogs[100])
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		delete catsAndDogs[i];
	}
}

static void	deepCopyExample(void)
{
	std::cout << "Code that is about to be executed:" << std::endl;
	std::cout << PURPLE;
	std::cout << "Cat	one, two;\n";
	std::cout << "one.createThought(\"bones\", 0);\n";
	std::cout << "two = one;\n";
	std::cout << "one.createThought(\"apples\", 0);" << RESET << std::endl;
	waitForUser("");

	Cat	one, two;
	one.createThought("bones", 0);
	two = one;
	one.createThought("apples", 0);

	std::cout << YELLOW;
	std::cout << "Cat Two now has a (deep) copy of Cat One\n";
	std::cout << "If we change anything for Cat One, Cat Two should stay the same\n";
	std::cout << "We can check this with the `Cat.thinkThought()` function." << std::endl;
	std::cout << RESET;
	waitForUser("");

	std::cout << "Two thinks: ";
	two.thinkThought(0);
	std::cout << "One thinks: ";
	one.thinkThought(0);
}

void	secondDeepCopyExample(void)
{
	std::cout << "--- Code to be executed ---" << std::endl;
	std::cout << PURPLE;
	std::cout << "Cat\tJames;\nCat\tJoshua(James);" << RESET << std::endl;
	waitForUser("");
	Cat	James;
	Cat	Joshua(James);

	waitForUser("--- Printing Brain Adresses ---");
	std::cout << "Brain Adress of James:\t";
	James.printBrainAdress();
	std::cout << "Brain Adress of Joshua:\t";
	Joshua.printBrainAdress();
}

int	main(void)
{
	Animal*	catsAndDogs[100];

	waitForUser("= = ASSIGNING 50 DOGS AND 50 CATS = =");
	allocateCatsAndDogs(catsAndDogs);
	waitForUser(" = = DESTROYING CATS AND DOGS AS ANIMALS = =");
	destroyCatsAndDogs(catsAndDogs);
	waitForUser("= = DEEP COPY EXAMPLE = =");
	deepCopyExample();
	waitForUser("= = SECOND DEEP COPY EXAMPLE = =");
	secondDeepCopyExample();

	return (0);
}
