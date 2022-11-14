NAME = push_swap

define HEADER

.______    __    __       _______. __    __             _______.____    __    ____  ___      .______
|   _  \  |  |  |  |     /       ||  |  |  |           /       |\   \  /  \  /   / /   \     |   _  \\
|  |_)  | |  |  |  |    |   (----`|  |__|  |          |   (----` \   \/    \/   / /  ^  \    |  |_)  |
|   ___/  |  |  |  |     \   \    |   __   |           \   \      \            / /  /_\  \   |   ___/
|  |      |  `--'  | .----)   |   |  |  |  |       .----)   |      \    /\    / /  _____  \  |  |
| _|       \______/  |_______/    |__|  |__|       |_______/        \__/  \__/ /__/     \__\ | _|


endef
export HEADER

CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address -g3

SRC =	main.c	input_handler.c \
		s.c	p.c \
		r.c	rr.c \
		sort.c \
		swap_utils.c swap_utils_2.c

SRC_OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	@$(MAKE) -C ./libft_extra
	@mv ./libft_extra/libft_extra.a .
	@$(CC) $(CFLAGS) $(SRC_OBJS) libft_extra.a -o $(NAME)
	@echo "$$HEADER"
	@echo "Push_Swap Compiled"

clean:
	@rm $(SRC_OBJS)
	@rm ./libft_extra.a
	@echo "Cleared .o and .a files"

fclean: clean
	@rm $(NAME)
	@echo "Cleared Push_Swap executable"

re: clean all

.PHONY: all clean fclean re