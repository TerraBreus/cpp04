#include "../inc/Dog.hpp"
#include "../inc/terminal_colors.h"
#include <iostream>

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << GREEN;
	std::cout << "Created a dog." << std::endl;
	std::cout << RESET;
}

Dog::Dog(const Dog& other)
{
	std::cout << GREEN;
	std::cout << "[DOG] Copy Constructor Called" << std::endl;
	std::cout << RESET;
	this->brain = nullptr;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;	
		if (!this->brain)
			this->brain = new Brain;
		*this->brain = *other.brain;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << RED;
	std::cout << "Disassembled dog." << std::endl;
	std::cout << RESET;
}

void	Dog::makeSound() const
{
	std::cout << "b o r k" << std::endl;
}

void	Dog::createThought(std::string str, int i)
{
	this->brain->setIdea(str, i);
}

void	Dog::thinkThought(int i)
{
	std::cout << this->brain->getIdea(i) << std::endl;
}

void	Dog::printBrainAdress()
{
	std::cout << this->brain << std::endl;
}
