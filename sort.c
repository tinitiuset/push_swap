/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:46 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/16 10:21:58 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_number **a)
{
	if ((*a)->index > (*a)->next->index)
		ft_s("a", a);
}

void	ft_sort_3(t_number **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second < third && third > first)
		ft_s("a", a);
	else if (first > second && second < third && third < first)
		ft_r("a", a);
	else if (first > second && second > third && third < first)
	{
		ft_s("a", a);
		ft_rr("a", a);
	}
	else if (first < third && second > third && third > first)
	{
		ft_s("a", a);
		ft_r("a", a);
	}
	else if (first < second && second > third && third < first)
		ft_rr("a", a);
}

void	ft_sort_5(t_number **a, t_number **b)
{
	t_number	*(*min_or_max)(t_number *);

	if ((*a)->index != ft_get_max(*a)->index)
		min_or_max = ft_get_min;
	else
		min_or_max = ft_get_max;
	while ((*a)->index != min_or_max(*a)->index)
		ft_r("a", a);
	ft_p("b", b, a);
	if (ft_get_size(*a) == 3)
		ft_sort_3(a);
	else
	{
		while ((*a)->index != min_or_max(*a)->index)
			ft_r("a", a);
		ft_p("b", b, a);
		ft_sort_3(a);
		ft_p("a", a, b);
		if (min_or_max == ft_get_max)
			ft_r("a", a);
	}
	ft_p("a", a, b);
	if (min_or_max == ft_get_max)
		ft_r("a", a);
}

/*
 * Radix based sort using indexes
 */
void	ft_sort(t_number **a, t_number **b)
{
	int	index;
	int	size;

	index = -1;
	while (++index < ft_count_bits(ft_get_max(*a)->index))
	{
		size = ft_get_size(*a);
		while (*a && size--)
		{
			if (!ft_check_bit((*a)->index, index))
				ft_p("b", b, a);
			else
				ft_r("a", a);
		}
		while (*b)
			ft_p("a", a, b);
	}
}
