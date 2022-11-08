/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:53:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/08 14:44:33 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p(char *stack, t_number **a, t_number **b)
{
	t_number	*temp_a;

	temp_a = malloc(sizeof(t_number));
	temp_a->number = 0;
	temp_a->next = NULL;
	temp_a->number = (*b)->number;
	if (*a)
		temp_a->next = *a;
	if ((*b)->next)
	{
		(*b)->number = (*b)->next->number;
		(*b)->next = (*b)->next->next;
	}
	else
		*b = NULL;
	if (stack)
		ft_printf("p%s\n", stack);
	*a = temp_a;
}
