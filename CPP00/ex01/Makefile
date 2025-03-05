CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = PhoneBook.cpp PhoneBook_funcs.cpp Contact_funcs.cpp

OBJS = $(SRCS:.cpp=.o)

exec = PhoneBook

HEADER = PhoneBook.hpp Contact.hpp

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