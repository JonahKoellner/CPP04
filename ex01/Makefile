# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 13:05:24 by jkollner          #+#    #+#              #
#    Updated: 2023/10/25 14:12:54 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Animals
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

%.o: %.cpp
	$(cc) $(cflags) $< -c -o $@

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all re clean fclean
