#include "../inc/Animal.hpp"
#include "../inc/terminal_colors.h"
#include <iostream>

Animal::Animal(void) 
{
	std::cout << GREEN;
	this->type = "no type set";
	std::cout << "An Animal class has been created." << std::endl;
	std::cout << RESET;
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal(void) 
{
	std::cout << RED;
	std::cout << "An Animal class has been destroyed." << std::endl;
	std::cout << RESET;
}

void	Animal::makeSound(void) const
{
	std::cout << "*GENERIC ANIMAL SOUND*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
