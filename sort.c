/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:46 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/07 16:30:27 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_number **a, t_number **b)
{
	int	min;

	while ((*a))
	{
		min = ft_get_min(*a);
		while ((*a)->number != min)
			r("a", a);
		p("b", b, a);
	}
	while ((*b))
		p("b", a, b);
}
