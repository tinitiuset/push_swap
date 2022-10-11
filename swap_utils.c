/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:18 by mvalient          #+#    #+#             */
/*   Updated: 2022/10/11 12:18:37 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_number *sa(t_number *list)
{
	t_number	*first;
	t_number	*second;

	if (!list->next)
		return  (0);
	first = list;
	second = list->next;
	first->next = second->next;
	second->next = first;
	return (second);
}

t_number *p(t_number *a, t_number *b)
{

}
