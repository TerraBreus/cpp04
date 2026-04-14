#include "../inc/Cat.hpp"
#include <iostream>
#include "../inc/terminal_colors.h"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << GREEN;
	std::cout << "A Cat has been created." << std::endl;
	std::cout << RESET;
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
		*this->brain = *other.brain;
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << RED;
	std::cout << "A Cat has been annihilated." << std::endl;
	std::cout << RESET;
}

void	Cat::makeSound(void) const
{
	std::cout << "bork bork amirite guys?" << std::endl;
}

void	Cat::createThought(std::string str, int i)
{
	this->brain->setIdea(str, i);
}

void	Cat::thinkThought(int i)
{
	std::cout << this->brain->getIdea(i) << std::endl;
}
