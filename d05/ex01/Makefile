NAME = bureaucrat

INC = 	Bureaucrat.hpp \
		Form.hpp

SRCS = 	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \

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