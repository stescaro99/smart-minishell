CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = minishell

SRCS = minishell.c

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	echo clean done

fclean:
	@rm -f $(NAME)

re: fclean all

fast: re
	clear

.PHONY: all clean fclean re fast
