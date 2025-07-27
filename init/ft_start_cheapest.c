/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_cheapest.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 06:36:49 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-12 06:36:49 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_start_cheapest" Mark the cheapest node in the current 
 * stack configurations.
 * 
 * 
 * @param t_node *stack Stack to evaluate (stack_b).
 * 
 */

void	ft_start_cheapest(t_node *stack)
{
	long	best_value_found;
	t_node	*best_node_found;

	if (stack == NULL)
		return ;
	best_value_found = LONG_MAX;
	while (stack)
	{
		if (stack->push_price < best_value_found)
		{
			best_value_found = stack->push_price;
			best_node_found = stack;
		}
		stack = stack->next;
	}
	best_node_found->cheapest = true;
}
