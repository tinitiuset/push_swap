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

CC = gcc
CFLAGS = -Wall -Werror -Wextra

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

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C ./libft_extra clean
	@rm -f $(SRC_OBJS)
	@rm -f ./libft_extra.a
	@echo "Cleared Push_Swap .o and .a files"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleared Push_Swap executable"

re: clean all

.PHONY: all clean fclean re
