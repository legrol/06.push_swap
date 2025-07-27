/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_current_pos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:36:58 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:36:58 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_start_current_pos" set the current position of every node
 * in the current state-configuration.
 * 
 * @param t_node 	*stack	Stack to configure node positions.
 * 
 */

void	ft_start_current_pos(t_node *stack)
{
	int	i;
	int	middle_line;

	i = 0;
	if (stack == NULL)
		return ;
	middle_line = ft_stack_size(stack) / 2;
	while (stack)
	{
		stack->current_pos = i;
		if (i <= middle_line)
			stack->above_middle = true;
		else
			stack->above_middle = false;
		stack = stack->next;
		i++;
	}
}
