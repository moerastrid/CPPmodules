# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/30 12:54:13 by ageels        #+#    #+#                  #
#    Updated: 2023/01/30 13:05:28 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp\
	Contact.cpp\
	Main.cpp
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