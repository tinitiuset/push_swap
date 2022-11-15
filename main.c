/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:27 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 21:20:37 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_number	*ft_handle(int argc, char **argv)
{
	if (argc > 2)
		return (ft_handle_input(argc, argv));
	else if (argc == 2)
		return (ft_handle_input_single_string(argv));
	else
		exit(0);
}

void	ft_sort_case_selector(t_number **a, t_number **b)
{
	if (ft_get_size(*a) == 3)
		ft_sort_3(a);
	if (ft_get_size(*a) == 5)
		ft_sort_5(a, b);
	ft_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_number	*a;
	t_number	*b;

	a = ft_handle(argc, argv);
	set_index(a);
	b = NULL;
	ft_sort_case_selector(&a, &b);
	return (0);
}
