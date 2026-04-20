#include <string>
#include "../inc/utils.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/terminal_colors.h"

void	incorrectPolymorphism(void)
{
	loadingScreen("INCORRECT POLYMORPHISM");
	clearTerminal();
	sleepyPrinter("Right! Let's take a look at what happens when we incorrectly implement polymorphism.");
	printer("This time we use a ", NO_NEWLINE);
	printer("WrongAnimal class", BRIGHT_RED, NO_NEWLINE);
	sleepyPrinter("");
	printer("This class does not use the ", NO_NEWLINE);
	printer("virtual", BRIGHT_GREEN, NO_NEWLINE);
	printer("keyword. Meaning the compiler does not know this function needs to be overwritten.", NEWLINE);
	sleepyPrinter("const WrongAnimal*\twrong = new WrongCat()", PURPLE);
	const WrongAnimal*	wrong = new WrongCat();

	sleepyPrinter("std::cout << wrong->getType() << std::endl", PURPLE);
	std::cout << BG_BLACK << wrong->getType() << RESET << std::endl;
	sleepyPrinter("wrong->makeSound();", PURPLE);
	wrong->makeSound();
	sleepyPrinter("delete wrong", PURPLE);
	delete wrong;

	step(nullptr);
	sleepyPrinter("So even though we have separate behavior for our WrongCat...");
	sleepyPrinter("We did not use polymorphism correctly and still get default behavior...");
	sleepyPrinter("So don't forget to use the \"virtual\" keyword");
	step(nullptr);
}
