/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:55:30 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/16 10:43:42 by mvalient         ###   ########.fr       */
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

int	ft_secure_atoi(char *nptr)
{
	long long	nb;
	int			sign;

	nb = 0;
	sign = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	if ((nb * sign) > INT_MAX || (nb * sign) < INT_MIN)
	{
		ft_printf("Error");
		exit(0);
	}
	return ((int)nb * sign);
}
