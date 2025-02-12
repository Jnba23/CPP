CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

exec = Account_logs

HEADER = Account.hpp

all : $(exec)

$(exec) : $(OBJS)
	c++ $^ -o $@

%.o : %.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(exec)

re : fclean all