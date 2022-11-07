/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/07 16:08:53 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_number **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->number;
	second = (*a)->next->number;
	third = (*a)->next->next->number;
	if (first > second && second < third && third > first)
		s("a", a);
	else if (first > second && second < third && third < first)
		r("a", a);
	else if (first > second && second > third && third < first)
	{
		s("a", a);
		rr("a", a);
	}
	else if (first < third && second > third && third > first)
	{
		s("a", a);
		r("a", a);
	}
	else if (first < second && second > third && third > first)
		rr("a", a);
}

void	sort_5(t_number **a, t_number **b)
{
	p("b", b, a);
	p("b", b, a);
	sort_3(a);
	p("a", a, b);
	if ((*a)->number > (*a)->next->next->next->number)
		r("a", a);
	else if ((*a)->number < (*a)->next->next->next->number)
	{
		rr("a", a);
		s("a", a);
		r("a", a);
		r("a", a);
	}
	else if ((*a)->number > (*a)->next->number)
		s("a", a);
	p("a", a, b);
	if ((*a)->number > (*a)->next->next->next->next->number)
		r("a", a);
	else if ((*a)->number > (*a)->next->number)
		s("a", a);
}

int	ft_get_min(t_number *a)
{
	int		min;

	min = a->number;
	while (a->next)
	{
		a = a->next;
		if (a->number < min)
			min = a->number;
	}
	return (min);
}
