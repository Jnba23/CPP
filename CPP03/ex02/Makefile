CC = c++
CFLAGS = -Wall -Werror -Wextra -I. -std=c++98

SRCM = main.cpp ClapTrap.cpp FragTrap.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = ClapTrap.hpp FragTrap.hpp
EXEC = FragTrap

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