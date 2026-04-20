#include "../inc/WrongAnimal.hpp"
#include <iostream>
#include "../inc/terminal_colors.h"

WrongAnimal::WrongAnimal(void) 
{
	this->type = "no type set";
	std::cout << BG_BLACK;
	std::cout << "An WrongAnimal class has been created." << std::endl;
	std::cout << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << BG_BLACK;
	std::cout << "An WrongAnimal class has been destroyed." << std::endl;
	std::cout << RESET;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << BG_BLACK;
	std::cout << "*GENERIC ANIMAL SOUND*" << std::endl;
	std::cout << RESET;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
