/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:42 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/25 12:48:55 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft_extra/ft_printf/ft_printf.h"
# include "./libft_extra/get_next_line/get_next_line.h"
# include "./libft_extra/libft/libft.h"

typedef struct s_number
{
	int				number;
	struct s_number	*next;
}			t_number;

void	s(char *stack, t_number **list);
void	p(char *stack, t_number **a, t_number **b);
void	r(char *stack, t_number **a);

#endif
