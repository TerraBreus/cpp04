#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"

void		correctPolymorphism(const Animal* animalPointers[3]);
void		incorrectPolymorphism(void);
void		startUpMessage();

int	main(void)
{
	const Animal*	animalPointers[3];
	std::string	userInput;

	for (int i = 0; i < 3; i++)
		animalPointers[i] = nullptr;
	clearTerminal();
	startUpMessage();
	userInput = askForInput(STR, animalPointers);
	if (userInput == "1")
	{
		correctPolymorphism(animalPointers);
		incorrectPolymorphism();
	}
	else if (userInput == "2")
	{
		incorrectPolymorphism();
		correctPolymorphism(animalPointers);
	}
	else
		idiotBehavior();

	return (0);
}
