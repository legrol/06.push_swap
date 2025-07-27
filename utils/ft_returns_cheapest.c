/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_returns_cheapest.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:43:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:43:47 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
* The function "ft_returns_cheapest" returns us the node with the lowest 
* movement cost.
*
* @param t_node *stack Stack where to find the cheapest node.
*
*/

t_node	*ft_returns_cheapest(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
