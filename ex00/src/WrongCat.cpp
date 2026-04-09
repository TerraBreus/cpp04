#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "A WrongCat has been created." << std::endl;
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
	std::cout << "A WrongCat has been annihilated." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "bork bork amirite guys?" << std::endl;
}
