NAME = someWeirdProgramForAnimalSounds
COMP = c++
FLAGS = -Wall -Werror -Wextra

SRC := \
	   correctPolymorphism.cpp \
	   utils.cpp \
	   main.cpp \
	   Animal.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   WrongCat.cpp \
	   WrongAnimal.cpp

SRCDIR := src/
OBJDIR := obj/

OBJ := $(addprefix $(OBJDIR), $(SRC:%.cpp=%.o))

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@

$(OBJDIR)%.o : $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)
	rmdir $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
