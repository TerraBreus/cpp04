NAME = howToSetTheWorldOnFire
COMP = c++
FLAGS = -Wall -Werror -Wextra -g

SRC := \
	   utils.cpp \
	   main.cpp \
	   Animal.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   WrongCat.cpp \
	   WrongAnimal.cpp \
	   Brain.cpp

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
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
