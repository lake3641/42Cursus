# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jungtlee <jungtlee@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 17:24:05 by jungtlee          #+#    #+#              #
#    Updated: 2020/04/09 12:02:30 by jungtlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_strlen.c ft_atoi.c ft_toupper.c ft_tolower.c ft_strdup.c\
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	   ft_isascii.c ft_isprint.c ft_itoa.c ft_calloc.c ft_strncmp.c ft_strlcpy.c\
	   ft_strlcat.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c\
	   ft_strrchr.c ft_strnstr.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c\
	   ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c
OBJS = ${SRCS:.c=.o}
BOBJS = ${BSRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INC = libft.h
TEST = test.out

%.o : %.c ${INC}
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs $@ ${OBJS}

all: ${NAME}

bonus: ${BOBJS} ${OBJS}
		ar rcs ${NAME} ${OBJS} ${BOBJS}

clean:
		${RM} ${OBJS} ${BOBJS}

fclean:	clean
		${RM} ${NAME} ${TEST}

test: bonus
		${CC} ${CFLAGS} test.c -o test.out -L./ -lft

re: fclean all
