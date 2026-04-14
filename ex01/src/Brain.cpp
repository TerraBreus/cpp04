#include "../inc/Brain.hpp"
#include <iostream>
#include "../inc/terminal_colors.h"

Brain::Brain(void)
{
	std::cout << GREEN;
	std::cout << "Creating brain 0_0" << std::endl;
	std::cout << RESET;
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "brain assigmentoperator called" << std::endl;
	if (this != &other)
	{
		this->ideas = other.ideas;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << RED;
	std::cout << "Stupifying animal (brain destructor)" << std::endl;
	std::cout << RESET;
}

void	Brain::setIdea(std::string thought, int i)
{
	this->ideas[i] = thought;
}

std::string	Brain::getIdea(int i)
{
	return (this->ideas[i]);
}
