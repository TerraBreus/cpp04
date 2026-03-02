#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat(void) override;

		void	makeSound(void) const override;
};
