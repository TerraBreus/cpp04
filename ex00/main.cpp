#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "terminal_colors.h"
#include "utils.hpp"

std::string	startUpMessage(void)
{
	//SHOULD I HAVE SOME KIND OF LEGEND TO SEPERATE DIFFERENT TYPES OF MESSAGES?
	std::cout << PURPLE;
	std::cout << "Welcome to my interactive program teaching you about Polymorphism." << std::endl;
	std::cout << "What would you like to see first?\n\n" << std::endl;
	std::cout << GREEN;
	std::cout << "1. Correct use of Polymorphism (Cats and Dogs derived from the Animal class)\n";
	std::cout << RED;
	std::cout << "2. Incorrect use of Polymorphism (WrongAnimal class)." << std::endl;
	std::cout << RESET;

	std::string	result = askForInput(STR);
	return (result);
}

void	correctPolymorphismMessageOne(void)
{
	loadingScreen("correctPolymorphism.exe");
	sleepyPrinter("=== AN INTRODUCTION TO POLYMORPHISM ===", YELLOW);
	sleepyPrinter("Hi my friend,\n");
	sleepyPrinter("Polymorphism is a way of having the same mechanism, trigger different behavior");
	sleepyPrinter("Take the following example of a handshake");
	printer("(press any key to continue)", NEWLINE);
	askForInput(CIN);
	loadingScreen("handshakeExample");
	sleepyPrinter("When you give your friend a handshake, assuming you are under the age of 35,");
	printer("you will most likely give them a hug or a box.", NEWLINE);
	sleepyPrinter("But when you meet someone for the very first time, you're more likely to give");
	printer("them a normal handshake. (The one that spreads diseases and stuff)", NEWLINE);
	printer("You see, they are the same mechanism, but different in execution.", NO_NEWLINE);
	printer("Both are types of greetings, yet they are not the same", NEWLINE);
	printer("Understand so far? (press any key to continue)", YELLOW, NEWLINE);
	askForInput(CIN);
	sleepyPrinter("Right! Let's go back to the exercise then!!!", GREEN);
	loadingScreen("catsAndDogs.meow");
	sleepyPrinter("In this example, we have dogs and cats, which are both animals.");
	sleepyPrinter("Cats and Dogs both can make sounds! However they are not the same...");
	sleepyPrinter("First, let's see what happens when we force a 'generic' animal to make a sound", RED);
	sleepyPrinter("const Animal* \t genericAnimal = new Animal();", PURPLE);
	// I NEED TO FIND A WAY TO SEPARATE MY TUTOR TEXT FROM DECONSTRUCTOR TEXTS
	const Animal *	genericAnimal = new Animal();

	printer("press any key to continue...", YELLOW, NEWLINE);
	askForInput(CIN);
	sleepyPrinter("genericAnimal->makeSound();");
	genericAnimal->makeSound();
	sleepyPrinter("const Animal* \t jake = new Dog();", PURPLE);
	printer("Jake is of type ", NO_NEWLINE);
	printer("dog", BOLD_RED, NO_NEWLINE);
	printer(", which is also a type of ", NO_NEWLINE);
	printer("animal", BOLD_PURPLE, NEWLINE);
	printer("Do you understand so far? (y/n)", NEWLINE);
}

void	correctPolymorphism(void)
{
	correctPolymorphismMessageOne();
	std::string	input = askForInput(STR);
	if (!(input == "y" || input == "Y"))
		idiotBehavior();
	sleepyPrinter("Alright, let's declare our dog!");
	const Animal*	j = new Dog();
	printer("Please type \"woof\" to continue", NEWLINE);
	input = askForInput(STR);
	if (input != "dog")
	{
		delete j;
		idiotBehavior();
	}
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
