#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"

int	main(void)
{

	Cat		catJames;
	Dog		dogJonathan;

	catJames.makeSound();
	dogJonathan.makeSound();
	//Animal	someAnimal;	//Variable type 'Animal' is an abstract class.
	
	Dog	basic;
	Dog	tmp = basic;

	std::cout << "Brain adress basic: ";
	basic.printBrainAdress();
	std::cout << "Brain adress tmp: ";
	tmp.printBrainAdress();
	return (0);
}
