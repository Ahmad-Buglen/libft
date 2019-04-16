# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/13 23:03:53 by dphyliss          #+#    #+#              #
#    Updated: 2019/04/14 15:58:17 by dphyliss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILE = *.c

OFILE = *.o

HFILE = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(HFILE) -c $(CFILE)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OFILE)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
