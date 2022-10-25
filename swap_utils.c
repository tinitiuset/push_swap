/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/25 12:42:29 by mvalient         ###   ########.fr       */
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
	ft_printf("s%s\n", stack);
	*list = second;
}

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
	ft_printf("p%s\n", stack);
	*a = temp_a;
}

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
