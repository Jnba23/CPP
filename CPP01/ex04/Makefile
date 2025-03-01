CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCM = main.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = s_nd_replace.hpp
EXEC =	s_nd_replace

all : $(EXEC)

$(EXEC) : $(OBJM)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJM)
fclean : clean
	rm -rf $(EXEC)
re : fclean all