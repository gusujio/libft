# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusujio <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 14:47:13 by gusujio           #+#    #+#              #
#    Updated: 2019/09/20 16:02:06 by gusujio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ft_*.c
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)

clean:
		/bin/rm -f ft_*.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
