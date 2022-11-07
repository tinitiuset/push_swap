/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:42 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/07 15:59:46 by mvalient         ###   ########.fr       */
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
void	sall(t_number **a, t_number **b);
void	p(char *stack, t_number **a, t_number **b);
void	r(char *stack, t_number **a);
void	rall(t_number **a, t_number **b);
void	rr(char *stack, t_number **a);
void	rrall(t_number **a, t_number **b);
void	sort_3(t_number **a);
void	sort_5(t_number **a, t_number **b);
int		ft_get_min(t_number *a);
void	ft_sort(t_number **a, t_number **b);

#endif
