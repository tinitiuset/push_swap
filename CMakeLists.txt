cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

include_directories(libft_extra)

add_executable(push_swap
        main.c
        swap_utils.c
        libft_extra/libft/ft_atoi.c
        libft_extra/libft/ft_isdigit.c
        )