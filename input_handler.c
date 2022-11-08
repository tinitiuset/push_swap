/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:31:28 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/08 14:24:15 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

t_number	*ft_handle_input_single_string(char **argv)
{
	int			i;
	char		**split;
	t_number	*list_head;
	t_number	*list_previous;
	t_number	*list_element;

	split = ft_split(argv[1], ' ');
	i = 0;
	list_head = malloc(sizeof(t_number));
	list_head->number = ft_atoi(split[i]);
	list_previous = list_head;
	free(split[i]);
	while (split[++i])
	{
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_atoi(split[i]);
		list_previous->next = list_element;
		list_previous = list_element;
		free(split[i]);
	}
	free(split);
	list_element->next = NULL;
	return (list_head);
}
