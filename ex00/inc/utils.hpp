#include <unistd.h>
#include "../inc/Animal.hpp"
#include <iostream>
#include "terminal_colors.h"
#define NEWLINE 1
#define NO_NEWLINE 0
#define CIN 1
#define STR 0

void	sleepyPrinter(std::string prompt, std::string color);
void	idiotBehavior(void);
void	sleepyPrinter(std::string prompt);
std::string askForInput(int	cinOrStr, const Animal* ptr[3]);
void	clearTerminal(void);
void	loadingScreen(std::string prompt);
void	printer(std::string prompt, std::string color, int newline);
void	printer(std::string prompt, int newline);
void	step(const Animal* ptr[3]);
