CC = c++
CFLAGS = -Wall -Werror -Wextra -I. -std=c++98

SRCM = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = Animal.hpp Cat.hpp Dog.hpp Brain.hpp
EXEC = Smart_Animal

all : $(EXEC)
$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@
%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -rf $(OBJM)
fclean : clean
	rm -rf $(EXEC)
re : all
