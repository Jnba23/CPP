CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

MAN = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJM = $(MAN:.cpp=.o)

EXEC = BraiiiiiiinnnzzzZ

HEADER = Zombie.hpp

all: $(EXEC)

$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJM)

fclean : clean
	rm -rf $(EXEC)

re : fclean all