/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/23 21:35:28 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_number	*s(char *stack, t_number *list)
{
	t_number	*first;
	t_number	*second;

	if (!list->next)
		return (0);
	first = list;
	second = list->next;
	first->next = second->next;
	second->next = first;
	ft_printf("s%s\n", stack);
	return (second);
}

t_number	*p(char *stack, t_number *a, t_number *b)
{
	t_number	*temp_a;
	t_number	*temp;

	temp_a = malloc(sizeof(t_number));
	temp_a->number = b->number;
	if (a)
		temp_a->next = a;
	b->number = b->next->number;
	temp = b->next;
	b->next = b->next->next;
	free(temp);
	ft_printf("p%s\n", stack);
	return (temp_a);
}
