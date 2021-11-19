NAME = phonebook

INC = 	Phonebook.class.hpp \
		Contact.class.hpp \

SRCS = 	main.cpp \
		Phonebook.class.cpp \
		Contact.class.cpp \

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

all : $(NAME) 

%.o : %.cpp
	clang++ -c $(CFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	clang++ $(CFLAGS) -o ${NAME} $(OBJS)


clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re