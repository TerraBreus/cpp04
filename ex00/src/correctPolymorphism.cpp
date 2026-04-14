#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"

void	correctPolymorphism(void)
{
	clearTerminal();
	sleepyPrinter("In this example, we have dogs and cats, which are both animals.");
	sleepyPrinter("Cats and Dogs both can make sounds! However they are not the same...");
	sleepyPrinter("First, let's see what happens when we force a 'generic' animal to make a sound");
	sleepyPrinter("Obviously, we must first initialize our Animal");
	sleepyPrinter("const Animal* \t genericAnimal = new Animal();", PURPLE);

	const Animal *	genericAnimal = new Animal();

	printer("This animal has a \"makeSound()\" function! Let's call it.", NEWLINE);
	step();
	sleepyPrinter("genericAnimal->makeSound();", PURPLE);

	genericAnimal->makeSound();

	step();
	sleepyPrinter("Since we no longer need our animal, let's delete it");
	printer("delete\tgenericAnimal;", PURPLE, NEWLINE);
	
	delete genericAnimal;

	step();

	clearTerminal();
	printer("Great! Now let me introduce you to jake!", NEWLINE);
	sleepyPrinter("const Animal*\tjake = new Dog();", PURPLE);
	const Animal*	jake = new Dog();

	sleepyPrinter("");
	printer("Jake is of type ", NO_NEWLINE);
	printer("dog", BOLD_RED, NO_NEWLINE);
	printer(", which is also a type of ", NO_NEWLINE);
	printer("animal", BOLD_PURPLE, NEWLINE);
	printer("This is why you see both the constructor messages from the Animal and the Dog class.", NEWLINE);
	step();
	printer("Now let's see what sound jake makes!", NEWLINE);
	sleepyPrinter("jake->makeSound()", PURPLE);
	jake->makeSound();

	step();
	sleepyPrinter("delete\tjake;", PURPLE);
	delete	jake;

	step();
	clearTerminal();
	printer("Awesome! So eventhough jake has inherited the \"makeSound\" function", NO_NEWLINE);
	printer(" from the animal class, it's behavior is different!", NEWLINE);
	sleepyPrinter("Now let's take a different animal!");
	sleepyPrinter("Animal*\tfiona = new Cat();", PURPLE);
	Animal*	fiona = new Cat();

	sleepyPrinter("fiona->makeSound();", PURPLE);
	fiona->makeSound();

	step();
	printer("delete fiona();", PURPLE, NEWLINE);
	delete	fiona;

	step();
	printer("The important factor here is to see how, even though fiona and jake are ", NO_NEWLINE);
	printer("declared as Animal Pointers", BRIGHT_GREEN, NEWLINE);
	printer("they still have different behavior", NEWLINE);
	step();
}
