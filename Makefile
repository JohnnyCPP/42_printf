# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 08:57:13 by jonnavar          #+#    #+#              #
#    Updated: 2024/01/25 19:53:58 by jonnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##                             ##
## START VARIABLE DECLARATIONS ##
#################################

# file names
NAME			= libftprintf.a
LIBFT			= libft/libft.a

# includes
INCLUDES		= -I ./libft

# compiler and flags
CC				= cc
CFLAGS			= -Wall -Wextra -Werror

# source and object files
SOURCE_FILES	= ft_printf.c ft_str_ph.c ft_print_char.c ft_print_str.c ft_print_ptr.c ft_no_ph.c ft_num_ph.c ft_print_num.c ft_print_unum.c ft_ph_ph.c ft_base_ph.c ft_print_lch.c ft_print_uch.c
OBJECT_FILES	= ${SOURCE_FILES:.c=.o}

# library creation. "r"="replace" "c"="create"
CREATE_LIB		= ar rc
CREATE_INDEX	= ranlib

# remove files
DELETE			= rm -f

# build libft
CD_LIBFT		= -C libft
BUILD_LIBFT		= make ${CD_LIBFT}
CLEAN_LIBFT		= make clean ${CD_LIBFT}
FCLEAN_LIBFT	= make fclean ${CD_LIBFT}

##                           ##
## END VARIABLE DECLARATIONS ##
###############################

# default rule, builds the library
all: dependencies ${NAME}

##             ##
## START LIBFT ##
#################

# builds the libft
${LIBFT}:
	${BUILD_LIBFT}

# cleans the libft
clean_libft:
	${CLEAN_LIBFT}

# cleans the libft removing the static library
fclean_libft:
	${FCLEAN_LIBFT}

##           ##
## END LIBFT ##
###############

##                               ##
## START DEPENDENCY DECLARATIONS ##
###################################

# builds the dependencies
dependencies: ${LIBFT}

# cleans the dependencies
clean_dependencies: clean_libft

# cleans the dependencies removing the static libraries
fclean_dependencies: fclean_libft

##                             ##
## END DEPENDENCY DECLARATIONS ##
#################################

##                               ##
## START TOP LEVEL LIBRARY BUILD ##
###################################

# compile source files into object files
.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

# builds the library
${NAME}: ${OBJECT_FILES}
	${CREATE_LIB} ${NAME} ${OBJECT_FILES}
	${CREATE_INDEX} ${NAME}

# deletes object files
clean: clean_dependencies
	${DELETE} ${OBJECT_FILES}

# deletes object files and the library
fclean: fclean_dependencies
	${DELETE} ${OBJECT_FILES}
	${DELETE} ${NAME}

# deletes object files, the library and builds it
re: fclean all

##                             ##
## END TOP LEVEL LIBRARY BUILD ##
#################################

