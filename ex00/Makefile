NAME = someWeirdProgramForAnimalSounds
COMP = c++
FLAGS = -Wall -Werror -Wextra

SRC := \
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

makedir :
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o : $(SRCDIR)%.cpp makedir
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)
	rmdir $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
