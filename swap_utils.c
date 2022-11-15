/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 23:52:58 by mvalient         ###   ########.fr       */
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

t_number	*ft_get_max(t_number *a)
{
	t_number	*max;

	max = a;
	while (a->next)
	{
		a = a->next;
		if (a->number > max->number)
			max = a;
	}
	return (max);
}

/*
 * TODO no idea how this works but it does.
 * if (!(candidate >= temp_a->number))
 *     if (!(temp_a->number > candidate))
 *         break ;
 */
int	ft_get_next(int prev, t_number *a)
{
	int			candidate;
	t_number	*temp_a;

	while (a)
	{
		if (a->number > prev)
		{
			candidate = a->number;
			temp_a = a;
			while (temp_a && candidate > prev)
			{
				if (temp_a->number < candidate && temp_a->number > prev)
					break ;
				if (!(candidate >= temp_a->number))
					if (!(temp_a->number > candidate))
						break ;
				temp_a = temp_a->next;
			}
			if (!temp_a)
				return (candidate);
		}
		a = a->next;
	}
	return (prev);
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

void	ft_list_ordered(t_number *a)
{
	int	prev;

	prev = a->index;
	a = a->next;
	while (a)
	{
		if (!(a->index > prev))
			return ;
		prev = a->index;
		a = a->next;
	}
	exit(0);
}
