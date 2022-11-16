/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:42 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/16 10:04:38 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft_extra/ft_printf/ft_printf.h"
# include "./libft_extra/get_next_line/get_next_line.h"
# include "./libft_extra/libft/libft.h"
# include "limits.h"

typedef struct s_number
{
	int				number;
	int				index;
	struct s_number	*next;
}			t_number;

void		ft_s(char *stack, t_number **list);
void		ft_sall(t_number **a, t_number **b);
void		ft_p(char *stack, t_number **a, t_number **b);
void		ft_r(char *stack, t_number **a);
void		ft_rall(t_number **a, t_number **b);
void		ft_rr(char *stack, t_number **a);
void		ft_rrall(t_number **a, t_number **b);
t_number	*ft_handle_input(int argc, char **argv);
t_number	*ft_handle_input_single_string(char **argv);
void		set_index(t_number *list);
t_number	*ft_get_min(t_number *a);
t_number	*ft_get_max(t_number *a);
int			ft_get_next(int prev, t_number *a);
int			ft_get_size(t_number *a);
void		ft_list_ordered(t_number *a);
int			ft_check_bit(int num, int pos);
int			ft_count_bits(int n);
int			ft_secure_atoi(char *nptr);
void		ft_sort_2(t_number **a);
void		ft_sort_3(t_number **a);
void		ft_sort_5(t_number **a, t_number **b);
void		ft_sort(t_number **a, t_number **b);

#endif
