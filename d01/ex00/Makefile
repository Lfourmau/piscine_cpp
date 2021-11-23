NAME = Zombies

INC = Zombie.hpp \

SRCS = 	Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \
		main.cpp \

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME) 

%.o : %.cpp $(INC)
	clang++ -c $(CFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	clang++ $(CFLAGS) -o ${NAME} $(OBJS)


clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re