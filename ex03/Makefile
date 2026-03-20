CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = violence
SRCS =	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(CPP_FLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

checkleaks:
	valgrind --leak-check=yes ./$(TARGET)
	§
re: fclean all

.PHONY: all show clean fclean re
