/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:49:38 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/25 13:49:38 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(char *stack, t_number **a)
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

void	rall(t_number **a, t_number **b)
{
	r(0, a);
	r("r", b);
}
