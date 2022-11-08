/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:46 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/08 14:05:53 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_number **a)
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

void	ft_sort_5(t_number **a, t_number **b)
{
	p("b", b, a);
	p("b", b, a);
	ft_sort_3(a);
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

void	ft_sort(t_number **a, t_number **b)
{
	int	min;
	int	max;
	int	size;
	int	index;

	size = ft_get_size(*a);
	while ((*a))
	{
		min = ft_get_min(*a);
		max = ft_get_max(*a);
		index = ft_get_index(*a, min);
		while ((*a)->number != min)
		{
			if (size / 2 > index)
				r("a", a);
			else
				rr("a", a);
		}
		p("b", b, a);
	}
	while ((*b))
		p("a", a, b);
}
