/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_smallest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:43:55 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:43:55 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The function "ft_search_smallest" search the stack passed as a parameter 
* for the node with the lowest value.
*
* @param t_node *stack Stack where to find the smallest node.
*
*/

t_node	*ft_search_smallest(t_node *stack)
{
	long	control_smallest;
	t_node	*smallest_node;

	if (stack == NULL)
		return (NULL);
	control_smallest = LONG_MAX;
	while (stack)
	{
		if (stack->value < control_smallest)
		{
			control_smallest = stack->value;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}
