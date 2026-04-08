#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "terminal_colors.h"

void	sleepyPrinter(std::string prompt, std::string color)
{
	std::cout << color;
	std::cout << prompt << std::endl;
	std::cout << RESET;
	sleep(1);
}

// Function overloading!!! If I call the function with less arguments,
// the compiler automatically knows which function to use. (C++ only!)
void	sleepyPrinter(std::string prompt)
{
	std::cout << prompt << std::endl;
	sleep(1);
}

std::string askForInput(void)
{
	std::string	userInput;

	while (true)
	{
		std::getline(std::cin, userInput);
		if (std::cin.eof())
		{
			std::cout << "Exiting program..." << std::endl;
			exit (0);
		}
		if (userInput.empty())
			continue ;
		else
			break;
	}
	return (userInput);
}

std::string	startMessage(void)
{
	std::cout << PURPLE;
	std::cout << "Welcome to my interactive program teaching you about Polymorphism." << std::endl;
	std::cout << "What would you like to see first?\n\n" << std::endl;
	std::cout << GREEN;
	std::cout << "1. Correct use of Polymorphism (Cats and Dogs derived from the Animal class)\n";
	std::cout << RED;
	std::cout << "2. Incorrect use of Polymorphism (WrongAnimal class)." << std::endl;
	std::cout << RESET;

	std::string	result = askForInput();
	return (result);
}

void	clearTerminal(void)
{
	//Escape sequence for clearing terminal
	//and moving cursor to top left.
	std::cout << "\033[2J\033[H";
}

void	loadingScreen(std::string prompt)
{
	clearTerminal();
	for (int j = 0; j < 3; j++)
	{
		std::cout << BRIGHT_RED;
		std::cout << "INITIALIZING " << prompt << std::endl;
		std::cout << RESET;
		std::cout << "\rLoading";
		for (int i = 0; i < 4; i++)
		{
			std::cout << ".";
			std::cout << std::flush;
			usleep(500000);
		}
		clearTerminal();
	}
}

#define NEWLINE 1
#define NO_NEWLINE 0

void	printer(std::string prompt, std::string color, int newline)
{
	std::cout << color;
	std::cout << prompt;
	if (newline == NEWLINE)
		std::cout << std::endl;
	else
		std::cout << std::flush;
	std::cout << RESET;
}

void	printer(std::string prompt, int newline)
{
	std::cout << prompt;
	if (newline == NEWLINE)
		std::cout << std::endl;
	else
		std::cout << std::flush;
}

void	correctPolymorphism(void)
{
	loadingScreen("correctPolymorphism.exe");
	sleepyPrinter("=== AN INTRODUCTION TO POLYMORPHISM ===", YELLOW);
	sleepyPrinter("Hi my friend,\nAllow me to introduce you to Jake");
	sleepyPrinter("const Animal* \t jake = new Dog();", PURPLE);
	printer("Jake is of type ", NO_NEWLINE);
	printer("dog", BOLD_RED, NO_NEWLINE);
	const Animal*	j = new Dog();
	const Animal*	meta = new Animal();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete	meta;
	delete	j;
	delete	i;
}

void	incorrectPolymorphism(void)
{
	const WrongAnimal*	wrong = new WrongCat();
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();
	delete	wrong;
}

void	idiotBehavior(void)
{
	sleepyPrinter("Oh well...", RED);
	sleepyPrinter("Guess we can start the program again", RED);
}

int	main(void)
{
	std::string	userInput;

	userInput = startMessage();
	if (userInput == "1")
		correctPolymorphism();
	else if (userInput == "2")
		incorrectPolymorphism();
	else
		idiotBehavior();

	return (0);
}
