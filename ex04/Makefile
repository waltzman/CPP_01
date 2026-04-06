CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = super_sed
SRCS = main.cpp
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

.PHONY: all show clean fclean re
