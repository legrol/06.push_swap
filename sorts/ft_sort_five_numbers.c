/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:48:05 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:48:05 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 *  The function "ft_sort_five_numbers", perform an ordering of five numbers.
 * 
 *  Initializes the parameters of both nodes and prepares the node stack_a with 
 *  the lowest value by moving it to the top. After that, it sends it to
 *  stack_b.
 *  
 *  This situation is repeated until there are only 3 elements left in stack_a.
 *
 *  All this to be able to process the stack_a later with the 
 *  "ft_sort_three_numbers" function.
 *
 *  @param t_node	**stack_a	stack to perform the sort.
 *  @param t_node	**stack_b	auxiliary stack for node transfer.
 * 
 */

void	ft_sort_five_numbers(t_node	**stack_a, t_node	**stack_b)
{
	while (ft_stack_size(*stack_a) > 3)
	{
		ft_start_param_nodes(*stack_a, *stack_b);
		ft_prep_to_push(stack_a, ft_search_smallest(*stack_a), 'a');
		pb(stack_a, stack_b, 1);
	}
}
