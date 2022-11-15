/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:27 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/15 17:12:53 by mvalient         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_number	*a;
	t_number	*b;
	void		**a_container;
	void		**b_container;

	a = ft_handle(argc, argv);
	set_index(a);
	b = NULL;
	a_container = (void *)&a;
	b_container = (void *)&b;
	if (ft_get_size(*a_container) == 3)
	{
		ft_sort_3((t_number **)a_container);
		exit (0);
	}
	if (ft_get_size(*a_container) == 5)
	{
		ft_sort_5((t_number **)a_container, (t_number **)b_container);
		exit (0);
	}
	ft_sort((t_number **)a_container, (t_number **)b_container);
	a = *a_container;
	b = *b_container;
	return (0);
}
