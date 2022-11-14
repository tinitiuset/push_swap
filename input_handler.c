/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:31:28 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/14 23:49:47 by mvalient         ###   ########.fr       */
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
	list_head->index = 0;
	list_previous = list_head;
	while (++i < argc)
	{
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_atoi(argv[i]);
		list_element->index = 0;
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
	list_head->index = 0;
	list_previous = list_head;
	free(split[i]);
	while (split[++i])
	{
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_atoi(split[i]);
		list_element->index = 0;
		list_previous->next = list_element;
		list_previous = list_element;
		free(split[i]);
	}
	free(split);
	list_element->next = NULL;
	return (list_head);
}

void	set_index(t_number *list)
{
	int			min;
	int			size;
	int			index;
	t_number	*temp_list;

	min = ft_get_min(list);
	size = ft_get_size(list);
	index = 0;
	while (size > index)
	{
		temp_list = list;
		while (temp_list)
		{
			if (temp_list->number == min)
			{
				temp_list->index = index++;
				break ;
			}
			temp_list = temp_list->next;
		}
		min = ft_get_next(min, list);
	}
}
