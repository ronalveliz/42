# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 19:11:45 by dveliz-c          #+#    #+#              #
#    Updated: 2024/10/09 19:17:14 by dveliz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
	SRC = 
	
SRCS = 
ft_striteri.c ft_isalpha.c ft_isdigit.c ft_isalnum.c 
ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c 
ft_bzero.c ft_memcpy.c ft_memmove.c 
ft_strlcpy.c ft_strlcat.c ft_toupper.c 
ft_tolower.c ft_strchr.c ft_strrchr.c ft_
strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c 
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c 
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c 
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c 
ft_putnbr_fd.c ft_strmapi.c
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
