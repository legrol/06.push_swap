/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 07:26:11 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-06 07:26:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The function "ft_stack_size" counts the number of nodes in the stack.
*
* @param t_node *stack Node to count.
* 
*/

int	ft_stack_size(t_node *stack)
{
	int	len;

	if (NULL == stack)
		return (0);
	len = 0;
	while (stack)
	{
		++len;
		stack = stack->next;
	}
	return (len);
}
