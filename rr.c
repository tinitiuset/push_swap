/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:47:09 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/25 13:47:09 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(char *stack, t_number **a)
{
	t_number	*iterator;

	iterator = *a;
	while (iterator->next->next)
		iterator = iterator->next;
	iterator->next->next = *a;
	*a = iterator->next;
	iterator->next = NULL;
	if (stack)
		ft_printf("rr%s\n", stack);
}

void	rrall(t_number **a, t_number **b)
{
	rr(0, a);
	rr("r", b);
}
