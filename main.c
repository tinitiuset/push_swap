/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:27 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/11 10:48:13 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extra/libft/libft.h"
#include "push_swap.h"

t_number	*ft_handle_input(int argc, char **argv)
{
	int			i;
	t_number	*list_head;
	t_number	*list_previous;
	t_number	*list_element;

	i = 1;
	list_head = malloc(sizeof(t_number));
	list_head->number = ft_atoi(argv[i]);
	list_previous = list_head;
	while (++i < argc)
	{
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_atoi(argv[i]);
		list_previous->next = list_element;
		list_previous = list_element;
	}
	list_element->next = NULL;
	return (list_head);
}

int	main(int argc, char **argv)
{
	t_number	*a;
	t_number	*b;

	a = ft_handle_input(argc, argv);
	a = sa(a);
	return (0);
}
