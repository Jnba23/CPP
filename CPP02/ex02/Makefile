CC = c++
CFLAGS = -Wall -Werror -Wextra -I. -std=c++98

SRCM = main.cpp Fixed.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = Fixed.hpp
EXEC = Fixed

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