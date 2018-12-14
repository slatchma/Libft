# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slatchma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 20:03:20 by slatchma          #+#    #+#              #
#    Updated: 2017/11/23 20:13:11 by slatchma    ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc -Wall -Wextra -Werror
FILES = ft_putchar ft_putstr ft_putnbr ft_strlen ft_strdup ft_strcmp ft_atoi ft_strcpy ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_strncmp ft_memchr ft_memcmp ft_strncpy ft_strcat ft_strncat ft_strlcat ft_memalloc ft_memdel ft_strnew ft_strdel ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_putendl ft_strclr ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit ft_strchr ft_strrchr ft_strstr ft_strnstr ft_itoa ft_lstadd ft_lstnew ft_lstdelone ft_lstdel ft_lstiter ft_lstmap
FILESC = $(addsuffix .c, $(FILES))
FILESO = $(addsuffix .o, $(FILES))


all : $(NAME)

$(NAME) : $(FILESO)
	ar rc libft.a $(FILESO)
	ranlib libft.a

%.o: %.c
	$(CC) -o $@ -c $?

clean :
	/bin/rm -f $(FILESO)

fclean : clean
	/bin/rm -f a.out $(NAME)

re : fclean all
