#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"


void	incorrectPolymorphism(void)
{
	const WrongAnimal*	wrong = new WrongCat();
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();
	delete	wrong;
}

void		correctPolymorphism();
std::string	startUpMessage();

int	main(void)
{
	std::string	userInput;

	clearTerminal();
	userInput = startUpMessage();
	if (userInput == "1")
		correctPolymorphism();
	else if (userInput == "2")
		incorrectPolymorphism();
	else
		idiotBehavior();

	return (0);
}
