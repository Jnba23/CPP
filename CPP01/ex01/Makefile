CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCM = main.cpp Zombie.cpp zombieHorde.cpp
OBJM = $(SRCM:%.cpp=%.o)
HEADER = Zombie.hpp
EXEC = MOAR_BRAIINZ

all: $(EXEC)

$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJM)
fclean : clean
	rm -rf $(EXEC)

re : fclean all