/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:27 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/23 09:53:28 by mvalient         ###   ########.fr       */
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
	if (ft_get_size(*a) == 1)
		exit(0);
	else if (ft_get_size(*a) == 2)
		ft_sort_2(a);
	else if (ft_get_size(*a) == 3)
		ft_sort_3(a);
	else if (ft_get_size(*a) == 4 || ft_get_size(*a) == 5)
		ft_sort_5(a, b);
	else
		ft_sort(a, b);
}

void	ft_clear_split(char **split)
{
	int	i;

	if (split)
	{
		i = -1;
		while (split[++i])
			free(split[i]);
		free(split);
	}
}

void	ft_clearup(t_number **a)
{
	t_number	*temp;

	if (*a)
	{
		while (*a)
		{
			temp = *a;
			(*a) = (*a)->next;
			free(temp);
		}
	}
}

int	main(int argc, char **argv)
{
	t_number	*a;
	t_number	*b;

	a = ft_handle(argc, argv);
	ft_set_index(a);
	b = NULL;
	ft_list_ordered(a);
	ft_sort_case_selector(&a, &b);
	ft_clearup(&a);
	free(a);
	free(b);
	return (0);
}
