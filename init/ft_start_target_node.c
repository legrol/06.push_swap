/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_target_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:37:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:37:21 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_start_target_node" search the smallest value of the bigger
 * values, than the compared value.
 * 
 * If no node is larger, best_index_found is the smallest node.
 * 
 * With this function, each node in stack_b gets its target_node in stack_a.
 * 
 * @param t_node *stack_a Stack with target nodes.
 * @param t_node *stack_b Stack with source nodes.
 *  
 */

void	ft_start_target_node(t_node *stack_a, t_node *stack_b)
{
	t_node	*current_stack;
	t_node	*control_target_node;
	long	best_index_found;

	while (stack_b)
	{
		current_stack = stack_a;
		best_index_found = LONG_MAX;
		while (current_stack)
		{
			if (current_stack->value > stack_b->value && \
			current_stack->value < best_index_found)
			{
				best_index_found = current_stack->value;
				control_target_node = current_stack;
			}
			current_stack = current_stack->next;
		}
		if (best_index_found == LONG_MAX)
			stack_b->target_node = ft_search_smallest(stack_a);
		else
			stack_b->target_node = control_target_node;
		stack_b = stack_b->next;
	}
}
