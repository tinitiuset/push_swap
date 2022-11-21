/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:53:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/21 12:41:57 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p(char *stack, t_number **a, t_number **b)
{
	t_number	*temp_a;

	temp_a = NULL;
	if (*a)
		temp_a = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp_a;
	if (stack)
		ft_printf("p%s\n", stack);
}
