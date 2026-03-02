#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) 
{
	this->type = "no type set";
	std::cout << "An Animal class has been created." << std::endl;
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
	std::cout << "An Animal class has been destroyed." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "*GENERIC ANIMAL SOUND*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
