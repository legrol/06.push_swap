/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:27:56 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:27:56 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The function "ft_free_stack" to free a stack.
*
*
* @param t_node **stack	Stack to free.
*
*/

void	ft_free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*current;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}
