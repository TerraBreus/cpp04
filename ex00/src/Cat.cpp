#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "A Cat has been created." << std::endl;
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
	std::cout << "A Cat has been annihilated." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "bork bork amirite guys?" << std::endl;
}
