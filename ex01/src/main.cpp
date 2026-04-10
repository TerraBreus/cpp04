#include "../inc/WrongCat.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include "../inc/terminal_colors.h"
#include "../inc/utils.hpp"

int	main(void)
{

	Brain	brain1;
	Brain	brain2;

	brain1.setIdea("hasd", 0);
	brain2 = brain1;

	std::cout << brain2.getIdea(0) << std::endl;
	
	Cat	one, two;
	one.createThought("bones", 0);
	one = two;
	one.createThought("apples", 0);
	std::cout << "Two thinks: ";
	two.thinkThought(0);
	std::cout << "One thinks: ";
	one.thinkThought(0);

	return (0);
}
