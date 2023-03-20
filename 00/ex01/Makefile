# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/20 12:34:53 by ageels        #+#    #+#                  #
#    Updated: 2023/03/20 12:47:18 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	PhoneBook.cpp \
	Contact.cpp \

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re