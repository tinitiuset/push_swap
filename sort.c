/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:46 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 18:51:48 by mvalient         ###   ########.fr       */
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

/*
 * Radix based sort using indexes
 */
void	ft_sort(t_number **a, t_number **b)
{
	int	index;
	int	size;
	int	max_bits;

	index = 0;
	max_bits = ft_count_bits(ft_get_max(*a)->index);
	while (index < max_bits)
	{
		size = ft_get_size(*a);
		while (*a && size--)
		{
			if (!ft_check_bit((*a)->index, index))
				p("b", b, a);
			else
				r("a", a);
		}
		while ((*b))
			p("a", a, b);
		index++;
	}
}
