#include "../inc/Cat.hpp"
#include <iostream>
#include "../inc/terminal_colors.h"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << BG_BLACK;
	std::cout << "A Cat has been created." << RESET << std::endl;
}

Cat::Cat(const Cat& other)
{
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;	
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << BG_BLACK;
	std::cout << "A Cat has been annihilated." << RESET << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << BG_BLACK;
	std::cout << "bork bork amirite guys? (miauw)" << RESET << std::endl;
}
