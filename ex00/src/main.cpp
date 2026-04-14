#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"

std::string	startUpMessage(void)
{
	std::cout << PURPLE;
	std::cout << "Welcome to my interactive program teaching you about Polymorphism." << std::endl;
	std::cout << RESET;
	std::cout << "Because this \"interactive\" program also prints things to the screen";
	std::cout << " a difference is made between";
	std::cout << BOLD_WHITE << " this text " << RESET;
	std::cout << "and text from (de)constructors/program based messages" << std::endl;
	std::cout << BG_BLACK << "THOSE MESSAGES WILL BE ON A BLACK BACKGROUND" << RESET << std::endl;
	std::cout << "What would you like to see first?\n\n" << std::endl;
	std::cout << GREEN;
	std::cout << "1. Correct use of Polymorphism (Cats and Dogs derived from the Animal class)\n";
	std::cout << RED;
	std::cout << "2. Incorrect use of Polymorphism (WrongAnimal class)." << std::endl;
	std::cout << RESET;

	std::string	result = askForInput(STR);
	return (result);
}

void	incorrectPolymorphism(void)
{
	const WrongAnimal*	wrong = new WrongCat();
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();
	delete	wrong;
}

void	correctPolymorphism();

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
