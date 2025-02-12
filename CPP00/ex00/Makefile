CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : megaphone

exec = megaphone
$(exec) : $(OBJS)
	c++ $^ -o $@

%.o : %.cpp
	c++ $(CFLAGS) -c $^ -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(exec)

re : fclean all