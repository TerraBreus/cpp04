#include "../inc/Dog.hpp"
#include "../inc/terminal_colors.h"
#include <iostream>

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << BG_BLACK;
	std::cout << "Created a dog." << std::endl;
	std::cout << RESET;
}

Dog::Dog(const Dog& other)
{
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;	
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Disassembled dog." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "b o r k" << std::endl;
}
