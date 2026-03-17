CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g
TARGET = brainzzz
SRCS = 	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(CPP_FLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	@$(CPP) $(CPP_FLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(TARGET)

re: fclean all

leak:
	valgrind --leak-check=yes ./$(TARGET)

.PHONY: all show clean fclean re
