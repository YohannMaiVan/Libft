# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 19:40:56 by yomai-va          #+#    #+#              #
#    Updated: 2019/01/16 21:14:19 by yomai-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################## BIN #############################################

NAME = libft.a

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdel.c \
			ft_lstnew.c	\
			ft_lstdelone.c \
			ft_lstdel.c	\
			ft_lstadd.c	\
			ft_lstiter.c \
			ft_lstmap.c \
			ft_blank.c \
			ft_checkblank.c \
			ft_digitlen.c \
			ft_nbwords.c \
			ft_strrev.c

CC = clang

SRCDIR = srcs

OBJDIR = objs

OBJ = $(addprefix ${OBJDIR}/, $(SRC:.c=.o))

DEP = $(addprefix ${OBJDIR}/, $(SRC:.c=.d))

CFLAGS = -Wall -Wextra -Werror -O3 -MMD

LDFLAGS = -Iincludes/

############################## RULES ###########################################

all: ${NAME}

${NAME}: ${OBJ}
	@echo ${B}Compiling [${NAME}]...
	@ar rcs ${NAME} ${OBJ}
	@echo ${G}Success"   "[${NAME}]

${OBJDIR}/%.o: ${SRCDIR}/%.c
	@echo Compiling [$@]...
	@/bin/mkdir -p ${OBJDIR}
	@${CC} ${CFLAGS} ${LDFLAGS} -c -o $@ $<

############################## GENERAL #########################################

clean:
	@echo Cleaning"  "[objs]...
	@/bin/rm -Rf ${OBJDIR}

fclean: clean
	@echo Cleaning"  "[${NAME}]...
	@/bin/rm -f ${NAME}
	@/bin/rm -Rf ${NAME}.dSYM

re: fclean all

.PHONY: all clean fclean re

-include ${DEP}
