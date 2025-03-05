NAME:=animal
CXXFLAGS:= -Wall -Werror -Wextra -std=c++98
CXX:= c++
SRC:= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp  WrongCat.cpp
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${OBJ} ${CXXFLAGS} -o ${NAME}
clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all re  fclean clean
