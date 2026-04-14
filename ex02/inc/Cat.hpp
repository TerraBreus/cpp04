#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
		
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat(void) override;

		void	makeSound(void) const override;
		void	createThought(std::string str, int i);
		void	thinkThought(int i);
		void	printBrainAdress();
};
