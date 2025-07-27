/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep_to_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:46:58 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:46:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The "ft_prep_to_push" function places the node with the lowest value (passed
* as the second argument) in the first position (first element) of the stack, 
* to pass it to the other stack with a push.
*
* @param t_node **stack		stack where to place the smallest number on top.
* @param t_node **top_node	pointer to the node in the stack to manage 
*							(smallest, cheaèst, etc...).
* @param char stack_name	indicates the letter of the stack to manage (a or 
*							b).
*
*/

void	ft_prep_to_push(t_node **stack, t_node *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_middle)
				ra (stack, 1);
			else
				rra(stack, 1);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_middle)
				rb (stack, 1);
			else
				rrb(stack, 1);
		}
	}
}
