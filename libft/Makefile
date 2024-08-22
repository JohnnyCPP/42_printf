# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 22:38:21 by jonnavar          #+#    #+#              #
#    Updated: 2023/11/23 22:42:24 by jonnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# file name
NAME			= libft.a

# compiler and flags
CC				= cc
CFLAGS			= -Wall -Wextra -Werror

# source and object files
SOURCE_FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECT_FILES	= ${SOURCE_FILES:.c=.o}
BONUS_FILES	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJECTS	= ${BONUS_FILES:.c=.o}

# library creation. "r"="replace" "c"="create"
CREATE_LIB	= ar rc
UPDATE_LIB	= ar r
CREATE_INDEX	= ranlib

# remove files
DELETE			= rm -f

# compile source files into object files
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# builds the library
${NAME}: ${OBJECT_FILES}
	${CREATE_LIB} ${NAME} ${OBJECT_FILES}
	${CREATE_INDEX} ${NAME}

# adds the bonus functions to the library
bonus: ${NAME} ${BONUS_OBJECTS}
	${UPDATE_LIB} ${NAME} ${BONUS_OBJECTS}

# deletes the bonus object files
bclean:
	${DELETE} ${BONUS_OBJECTS}

# default rule, builds the library
all: ${NAME}

# deletes object files
clean: bclean
	${DELETE} ${OBJECT_FILES}

# deletes object files and the library
fclean: clean
	${DELETE} ${NAME}

# deletes object files, the library and builds it
re: fclean all
