# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvargas <dvargas@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 13:30:55 by dvargas           #+#    #+#              #
#    Updated: 2022/06/06 14:18:46 by dvargas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_striteri.c 
BONUSES	=	ft_lstnew_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c
CC	=	cc
CFLAGS	= -Wall -Wextra -Werror -c
OBJS = $(SRCS:.c=.o)
BONUS_O = $(BONUSES:.c=.o)
RM = rm -f
LIBC = ar -rcs

${NAME}:
	$(CC) $(CFLAGS) -I. $(SRCS)
	$(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(BONUS_O)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

bonus:		$(NAME)
	$(CC) $(CFLAGS) -I. $(BONUSES)
	ar -qs $(NAME) $(BONUS_O)

.PHONY:		all fclean clean re bonus
