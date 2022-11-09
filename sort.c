/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:46 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/09 01:25:35 by mvalient         ###   ########.fr       */
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
	int	max;
	int median;
	int	size;

	size = ft_get_size(*a);
	median  = ft_get_median(*a);
	// Mover superiores a medio
	while ((*a))
		if((*a)->number > median)
			p("b", b, a);
		else if (ft_get_max(*a) != median)
			r("a", a);
		else
			break ;
	// Ordenar lo que haya en b
	while ((*b))
	{
		max = ft_get_max(*b);
		while ((*b)->number != max)
		{
			if (size / 2 > ft_get_index(*b, max))
				r("b", b);
			else
				rr("b", b);
		}
		p("a", a, b);
	}
	// Buscar medio
	while ((*a)->number != median)
		if (size / 2 > ft_get_index(*a, median))
			r("a", a);
		else
			rr("a", a);
	// Mover menor igual que medio
	while ((*a))
		if((*a)->number <= median)
			p("b", b, a);
		else if (ft_get_min(*a) < median)
			r("a", a);
		else
			break ;
	// Ordenar lo que haya en b
	while ((*b))
	{
		max = ft_get_max(*b);
		while ((*b)->number != max)
		{
			if (size / 2 > ft_get_index(*b, max))
				r("b", b);
			else
				rr("b", b);
		}
		p("a", a, b);
	}
}

/*void	ft_sort(t_number **a, t_number **b)
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
}*/
