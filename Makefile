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

SRC =	main.c	swap_utils.c \
		s.c	p.c \
		r.c	rr.c \
		sort.c

SRC_OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	@$(MAKE) -C ./libft_extra
	@mv ./libft_extra/libft_extra.a .
	@$(CC) $(SRC_OBJS) libft_extra.a -o $(NAME)
	@echo "$$HEADER"

clean:
	rm $(SRC_OBJS)

fclean: clean
	rm $(NAME)

re: clean all

.PHONY: all clean fclean re