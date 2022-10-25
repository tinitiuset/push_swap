/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:53:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/25 13:54:22 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p(char *stack, t_number **a, t_number **b)
{
	t_number	*temp_a;
	t_number	*temp;

	temp_a = malloc(sizeof(t_number));
	temp_a->number = (*b)->number;
	if (*a)
		temp_a->next = *a;
	(*b)->number = (*b)->next->number;
	temp = (*b)->next;
	free(temp);
	(*b)->next = (*b)->next->next;
	if (stack)
		ft_printf("p%s\n", stack);
	*a = temp_a;
}
