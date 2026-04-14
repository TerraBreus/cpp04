#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;	
	public:
		Dog (void);
		Dog (const Dog & other);
		Dog & operator=(const Dog & other);
		~Dog (void) override;

		void	makeSound(void) const override;
		void	createThought(std::string, int i);
		void	thinkThought(int i);
};
