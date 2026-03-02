NAME = someWeirdProgramForAnimalSounds
COMP = c++
FLAGS = -Wall -Werror -Wextra

SRC := \
	   main.cpp \
	   Animal.cpp \
	   Dog.cpp \
	   Cat.cpp 

OBJ := $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
