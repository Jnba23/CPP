CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCM = main.cpp Harl.cpp
OBJM = $(SRCM:.cpp=.o)
HEADER = Harl.hpp
EXEC = harlFilter

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