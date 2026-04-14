#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"

int	main(void)
{
	
	Animal*	catsAndDogs[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			catsAndDogs[i] = new Cat;
		else
			catsAndDogs[i] = new Dog;
	}

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		delete catsAndDogs[i];
	}

	Cat	one, two;
	one.createThought("bones", 0);
	two = one;
	one.createThought("apples", 0);
	std::cout << "Two thinks: ";
	two.thinkThought(0);
	std::cout << "One thinks: ";
	one.thinkThought(0);

	return (0);
}
