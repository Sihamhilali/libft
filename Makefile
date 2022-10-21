# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 11:35:28 by selhilal          #+#    #+#              #
#    Updated: 2022/10/20 14:01:20 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c    ft_putchar_fd.c ft_strjoin.c    ft_strtrim.c  ft_isprint.c  \
		 ft_putendl_fd.c ft_strlcat.c    ft_substr.c   ft_atoi.c      ft_itoa.c  \
		 ft_putnbr_fd.c  ft_strlcpy.c  ft_tolower.c     ft_bzero.c     ft_memchr.c \
		 ft_putstr_fd.c  ft_strlen.c     ft_toupper.c    ft_calloc.c  ft_memcmp.c  \
		 ft_split.c      ft_strmapi.c    ft_isalnum.c    ft_memcpy.c   ft_strchr.c \
		 ft_strncmp.c    ft_isalpha.c    ft_memmove.c    ft_strdup.c    ft_strnstr.c\
		 ft_isascii.c    ft_memset.c     ft_striteri.c   ft_strrchr.c
		 

INCLUDE = libft.h

all : $(NAME)

$(NAME) : $(SRC) $(INCLUDE)
	gcc $(CFLAGS) -I $(INCLUDE) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean :
	rm -f *.o
	
fclean : clean
	rm -f $(NAME)
re : fclean all
	