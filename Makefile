# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 11:35:28 by selhilal          #+#    #+#              #
#    Updated: 2022/10/29 01:36:47 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

SRC = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c ft_strmapi.c\
		ft_strlcat.c ft_atoi.c ft_substr.c ft_putchar_fd.c ft_memcpy.c \
		ft_strlcpy.c ft_tolower.c ft_bzero.c  ft_strlen.c ft_putstr_fd.c  \
		ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_striteri.c ft_putendl_fd.c\
		ft_memcmp.c  ft_strncmp.c ft_putnbr_fd.c ft_isalpha.c  ft_strchr.c ft_itoa.c \
		ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c   ft_split.c \
		


OBJS = $(SRC:.c=.o)
BONUS_C = ft_lstnew.c \
			   ft_lstadd_front.c \
			   ft_lstsize.c \
			   ft_lstlast.c \
			   ft_lstadd_back.c \
			   ft_lstdelone.c \
			   ft_lstclear.c 
			   
BONUS_OBJ = $(BONUS_C:.c=.o)
all:$(NAME)

bonus: $(BONUS_OBJ)
	$(ARC) $(NAME) $(BONUS_OBJ)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BONUS_OBJ) 

%.o : %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $< 
fclean: clean
	rm -f $(NAME)

re : fclean all bonus

.PHONY: clean fclean bonus all re