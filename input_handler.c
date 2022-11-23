/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:31:28 by mvalient          #+#    #+#             */
/*   Updated: 2022/11/23 09:34:18 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_clear_split(char **split)
{
	int i;

	if (split)
	{
		i = -1;
		while (split[++i])
			free(split[i]);
		free(split);
	}
}

static void	ft_good_input(const char *string, t_number **a, char **split)
{
	int	i;

	i = 0;
	if (string[0] == '-')
	{
		i = 1;
		if (!string[i])
		{
			ft_clearup(a);
			ft_clear_split(split);
			ft_printf("Error\n");
			exit(0);
		}
	}
	while (string[i])
	{
		if (!(string[i] >= 48 && string[i] <= 57))
		{
			ft_clearup(a);
			ft_clear_split(split);
			ft_printf("Error\n");
			exit(0);
		}
		i++;
	}
}

static void	ft_not_repeated(int num, t_number *list)
{
	while (list)
	{
		if (list->number == num)
		{
			ft_printf("Error\n");
			exit(0);
		}
		list = list->next;
	}
}

t_number	*ft_handle_input(int argc, char **argv)
{
	int			i;
	t_number	*list_head;
	t_number	*list_previous;
	t_number	*list_element;

	i = 0;
	list_head = NULL;
	while (++i < argc)
	{
		ft_good_input(argv[i], &list_head, NULL);
		if (i > 1)
			ft_not_repeated(ft_secure_atoi(argv[i]), list_head);
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_secure_atoi(argv[i]);
		list_element->index = 0;
		list_element->next = NULL;
		if (i > 1)
			list_previous->next = list_element;
		list_previous = list_element;
		if (i == 1)
			list_head = list_element;
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

	list_head = NULL;
	split = ft_split(argv[1], ' ');
	i = -1;
	while (split[++i])
	{
		ft_good_input(split[i], &list_head, split);
		if (i)
			ft_not_repeated(ft_secure_atoi(split[i]), list_head);
		list_element = malloc(sizeof(t_number));
		list_element->number = ft_secure_atoi(split[i]);
		list_element->index = 0;
		list_element->next = NULL;
		if (i)
			list_previous->next = list_element;
		list_previous = list_element;
		if (!i)
			list_head = list_element;
	}
	return (ft_clear_split(split), list_head);
}

void	ft_set_index(t_number *list)
{
	int			min;
	int			size;
	int			index;
	t_number	*temp_list;

	min = ft_get_min(list)->number;
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
