#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		
	public:
		Dog (void);
		Dog (const Dog & other);
		Dog & operator=(const Dog & other);
		~Dog (void) override;

		void	makeSound(void) const override;
};
