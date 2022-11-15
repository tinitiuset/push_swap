/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:51:58 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 17:12:53 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(char *stack, t_number **list)
{
	t_number	*first;
	t_number	*second;

	if (!(*list)->next)
	{
		*list = NULL;
		return ;
	}
	first = *list;
	second = (*list)->next;
	first->next = second->next;
	second->next = first;
	if (stack)
		ft_printf("s%s\n", stack);
	*list = second;
}

void	sall(t_number **a, t_number **b)
{
	s(0, a);
	s("s", b);
}
