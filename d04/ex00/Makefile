NAME = ouafouaf

INC = 	Animal.hpp \
		Cat.hpp \
		Dog.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp \

SRCS = 	main.cpp \
		Dog.cpp \
		Animal.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJS = $(SRCS:.cpp=.o)


CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = clang++

all : $(NAME) 

%.o : %.cpp $(INC)
	$(CXX) -c $(CXXFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o ${NAME} $(OBJS)


clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re