#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
// These should be in a header called colors.hpp"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define PURPLE "\033[35m"
#define RESET "\033[m"

void	sleepyPrinter(std::string prompt, std::string color)
{
	std::cout << color;
	std::cout << prompt << std::endl;
	std::cout << RESET;
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

void	correctPolymorphism(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
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
	sleep(1);
	if (userInput == "1")
		correctPolymorphism();
	else if (userInput == "2")
		incorrectPolymorphism();
	else
		idiotBehavior();

	return (0);
}
