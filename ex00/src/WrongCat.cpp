#include "../inc/WrongCat.hpp"
#include "../inc/terminal_colors.h"
#include <iostream>

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << BG_BLACK;
	std::cout << "A WrongCat has been created." << std::endl;
	std::cout << RESET;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		this->type = other.type;	
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << BG_BLACK;
	std::cout << "A WrongCat has been annihilated." << std::endl;
	std::cout << RESET;
}

void	WrongCat::makeSound(void) const
{
	std::cout << BG_BLACK;
	std::cout << "bork bork amirite guys?" << std::endl;
	std::cout << RESET;
}
