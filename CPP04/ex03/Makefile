CC = c++
CFLAGS = -Wall -Werror -Wextra -I. -std=c++98

SRCM = main.cpp AMateria.hpp 
OBJM = $(SRCM:.cpp=.o)
HEADER = AMateria.hpp
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
