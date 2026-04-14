#pragma once
#include <string>
#include <array>

class Brain
{
	private:
		std::array<std::string, 100>	ideas;
	public:
		Brain(void);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain(void);

		void		setIdea(std::string thought, int i);
		std::string	getIdea(int i);	
};
