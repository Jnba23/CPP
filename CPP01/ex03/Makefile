CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCM = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = HumanA.hpp Weapon.hpp HumanB.hpp
EXEC = Unecessary_violance

all : $(EXEC)

$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJM)
fclean : clean
	rm -rf $(EXEC)
re : fclean all