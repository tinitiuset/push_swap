/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:47:09 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 21:04:15 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(char *stack, t_number **a)
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

void	ft_rrall(t_number **a, t_number **b)
{
	ft_rr(0, a);
	ft_rr("r", b);
}
