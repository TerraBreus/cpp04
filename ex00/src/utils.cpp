#include <string>
#include "../inc/utils.hpp"

void	sleepyPrinter(std::string prompt, std::string color)
{
	std::cout << color;
	std::cout << prompt << std::endl;
	std::cout << RESET;
	sleep(1);
}

void	idiotBehavior(void)
{
	sleepyPrinter("Oh well...", RED);
	sleepyPrinter("Guess we can start the program again", RED);
	exit(0);
}

// Function overloading!!! If I call the function with less arguments,
// the compiler automatically knows which function to use. (C++ only!)
void	sleepyPrinter(std::string prompt)
{
	std::cout << prompt << std::endl;
	sleep(1);
}

std::string askForInput(int	cinOrStr)
{
	std::string	userInput;

	if (cinOrStr == CIN)
		userInput = std::cin.get();
	if (cinOrStr == STR)
		std::getline(std::cin, userInput);
	if (std::cin.eof())
	{
		std::cout << "Exiting program..." << std::endl;
		exit (0);
	}
	return (userInput);
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

void	step(void)
{
	std::cout << YELLOW;
	std::cout << "Press ENTER to continue" << RESET << std::endl;
	askForInput(CIN);
}
