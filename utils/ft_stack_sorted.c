/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:45:33 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:45:33 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The function "ft_stack_sorted" check if the stack is already sorted or not.
*
* @param t_node *stack	Stack to check.
*
*/

bool	ft_stack_sorted(t_node *stack)
{
	if (stack == NULL)
		return (true);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}
