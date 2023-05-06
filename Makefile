# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: analexan <analexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 13:29:52 by elraira-          #+#    #+#              #
#    Updated: 2023/04/27 19:16:26 by analexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

RM	=	rm -f

AR	=	ar -rcs

INCLUDE	=	libft.h

SOURCES	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
			ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
			ft_memmove.c ft_strdup.c ft_strnstr.c ft_strjoin.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_striteri.c

BSOURCES		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstnew.c ft_lstsize.c \
					ft_lstlast.c ft_lstiter.c ft_lstmap.c 

OBJECTS	= $(SOURCES:.c=.o)

BOBJECTS = $(BSOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS)

.c.o:	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJECTS) $(BOBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

bonus:	$(OBJECTS) $(BOBJECTS) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS) $(BOBJECTS)

rebonus: fclean bonus
	
lt:
	@ar -t $(NAME)

e: fclean

.PHONY:	all clean fclean re bonus rebonus