NAME = Materias

INC = 	AMateria.hpp \
		Ice.hpp \
		Cure.hpp \
		Character.hpp \
		ICharacter.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp \

SRCS = 	main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		IMateriaSource.cpp \
		MateriaSource.cpp \

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