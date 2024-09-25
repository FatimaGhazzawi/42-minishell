NAME	=	minishell
SRC		=	ft_split_helper.c \
			ft_split.c \
			ft_echo.c \
			maintester.c \
			utils0.c \
			ft_pwd.c \
			ft_exit.c \
			ft_cd.c \
			
			
OBJ = ${SRC:.c=.o}
CC = cc
CFLAGS = -Werror -Wall -Wextra -g
LIBFT_DIR = ../Libft
LIBFT = $(LIBFT_DIR)/libft.a

%.o : %.c
	$(CC) $(CFLAGS) -Iincludes -c $< -o $@

all : $(NAME)

$(NAME) : ${OBJ}
	make re -C ./Libft
	$(CC) ${OBJ} -lreadline -LLibft -lft -o ${NAME}

clean:
	make clean -C ./Libft
	rm -f ${OBJ}

fclean: clean
	make fclean -C ./Libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

