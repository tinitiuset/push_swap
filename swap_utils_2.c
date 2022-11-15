/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:55:30 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 17:17:38 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	check_bit(int num, int pos)
{
	return ((num >> pos) & 0x01);
}
