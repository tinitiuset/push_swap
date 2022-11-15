/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:49:38 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 17:12:53 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r(char *stack, t_number **a)
{
	t_number	*first;
	t_number	*iterator;

	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	iterator = *a;
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = first;
	ft_printf("r%s\n", stack);
}

void	ft_rall(t_number **a, t_number **b)
{
	ft_r(0, a);
	ft_r("r", b);
}
