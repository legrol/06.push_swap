/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_last_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 09:21:15 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 09:21:15 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_find_last_node" as the name suggests, it finds the last node 
 * of a stack and returns it. 
 * 
 * @param t_node	*stack	Stack in which we look for the last node.
 * 
 */

t_node	*ft_find_last_node(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
