/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/09 00:32:49 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_get_max(t_number *a)
{
	int		max;

	max = a->number;
	while (a->next)
	{
		a = a->next;
		if (a->number > max)
			max = a->number;
	}
	return (max);
}

int	ft_get_index(t_number *a, int number)
{
	int		index;

	index = 0;
	while (a)
	{
		index++;
		if (number == a->number)
			break ;
		a = a->next;
	}
	return (index);
}

int	ft_get_size(t_number *a)
{
	int		size;

	size = 0;
	while (a)
	{
		a = a->next;
		size++;
	}
	return (size);
}

int	ft_get_median(t_number *a)
{
	int			result;
	long long	median;
	t_number	*temp;

	median = 0;
	temp = a;
	while (temp)
	{
		median += temp->number;
		temp = temp->next;
	}
	median = median / ft_get_size(a);
	result = INT_MIN;
	while (a)
	{
		if (a->number > result && a->number < median)
			result = a->number;
		else
			a = a->next;
	}
	return (result);
}
