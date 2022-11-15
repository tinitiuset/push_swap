/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:55:30 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 19:20:44 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * X>>Y Right Shift Operator equivalent to dividing x with y^2
 */
int	ft_count_bits(int n)
{
	int	bits;

	bits = 0;
	while (n)
	{
		n >>= 1;
		bits++;
	}
	return (bits);
}

int	ft_check_bit(int num, int pos)
{
	return ((num >> pos) & 1);
}
