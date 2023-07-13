NAME = run
CXX = c++
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -std=c++98
SRCS = 	ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp

INCLS = ClapTrap.hpp \
		ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $^

%.o : %.cpp $(SRCS) $(INCLS)
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
