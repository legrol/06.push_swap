/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_push_price.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:37:10 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:37:10 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 *
 * The function "" Sets the prices for pushing the node from stack_b to 
 * stack_a.
 * 
 * The push_price checks the relative positions in the stack_b for each node 
 * and sets the price accordingly.
 * 
 * @param t_node *stack_a stack destination.
 * @param t_node *stack_b stack source.
 * 
 */

void	ft_start_push_price(t_node *stack_a, t_node *stack_b)
{
	int	len_stack_a;
	int	len_stack_b;

	len_stack_a = ft_stack_size(stack_a);
	len_stack_b = ft_stack_size(stack_b);
	while (stack_b)
	{
		stack_b->push_price = stack_b->current_pos;
		if (!(stack_b->above_middle))
			stack_b->push_price = len_stack_b - (stack_b->current_pos);
		if ((stack_b->target_node->above_middle))
			stack_b->push_price += stack_b->target_node->current_pos;
		else
			stack_b->push_price += len_stack_a - \
			(stack_b->target_node->current_pos);
		stack_b = stack_b->next;
	}
}
