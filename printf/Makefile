# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjunior <rjunior@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 16:52:14 by rjunior           #+#    #+#              #
#    Updated: 2022/03/05 17:04:22 by rjunior          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
# Nome

SRCS =	ft_base.c \
		ft_check_arg.c \
		ft_pointer.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c 

# Transforma .c em .o
OBJS =	$(SRCS:.c=.o)

CC =	gcc
CFLAGS	=	-Wall -Werror -Wextra -I.
# -I (incluir) Especifica um diretorio para pesquisar os makefiles incluidos
RM =	rm -f
# -rm remove arquivos
# f ignora arquivos e argumentos

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# ar cria e mantem arquivos
# r se ja existir subistitui por novos
# c criar biblioteca se nao existir uma
# s cria um indice classificado da biblioteca para que seja indexada
# Portanto, rcs pode ser visto como replace,create and sort.
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all