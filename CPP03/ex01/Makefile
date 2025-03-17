CC = c++
CFLAGS = -Wall -Werror -Wextra -I. -std=c++98

SRCM = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = ClapTrap.hpp ScavTrap.hpp
EXEC = ClapTrap

all: $(EXEC)

$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJM)
fclean: clean
	rm -rf $(EXEC)
re: fclean all