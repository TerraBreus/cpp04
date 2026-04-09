#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) 
{
	this->type = "no type set";
	std::cout << "An WrongAnimal class has been created." << std::endl;
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
	std::cout << "An WrongAnimal class has been destroyed." << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*GENERIC ANIMAL SOUND*" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
