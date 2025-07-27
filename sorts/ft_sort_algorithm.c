/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:47:57 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:47:57 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_sort_algorithm" analyzes whether stack_a contains 5 or 
 * different elements, in order to use the "ft_sort_five_numbers" function or 
 * the "ft_sort_big_numbers" function.
 * 
 * @param t_node	**stack_a		Stack to perform the sort.
 * @param t_node	**stack_b		Auxiliary stack for node transfer.
 *
 * The function "move_nodes" places the cheapest node in the first position of
 * stack_b. Places the target node in the first position of stack_a. After both 
 * moves, it makes a pa and inserts the cheapest node from stack_b in its 
 * position in stack_a.
 *
 * @param t_node	**stack_a		Stack_a.
 * @param t_node 	**stack_b		Stack_b.
 *
 * The function "rotate_both" performs a rotate of both nodes (rr), after 
 * placing the cheapest node on top of stack_b and the target_node of 
 * cheapest_node on top * of stack_a.
 *
 * @param t_node	**stack_a		Stack_a.
 * @param t_node	**stack_b		Stack_b.
 * @param t_node	*cheapest_node	The cheapest node of stack_b.
 *
 * The function "reverse_rotate_both" performs a reverse_rotate of both nodes
 * (rrr), after lacing the cheapest node on top of stack_b and the target_node
 * cheapest_node on top of stack_a.
 *
 * @param t_node	**stack_a		Stack_a.
 * @param t_node	**stack_b		Stack_b.
 * @param t_node	*cheapest_node	The cheapest node of stack_b.
 * 
 */

static void	reverse_rotate_both(t_node **stack_a, t_node **stack_b, \
t_node *cheapest_node)
{
	while (*stack_a != cheapest_node->target_node && *stack_b != cheapest_node)
		rrr(stack_a, stack_b, 1);
	ft_start_current_pos(*stack_a);
	ft_start_current_pos(*stack_b);
}

static void	rotate_both(t_node **stack_a, t_node **stack_b, \
t_node *cheapest_node)
{
	while (*stack_a != cheapest_node->target_node && *stack_b != cheapest_node)
		rr(stack_a, stack_b, 1);
	ft_start_current_pos(*stack_a);
	ft_start_current_pos(*stack_b);
}

static void	move_nodes(t_node **stack_a, t_node **stack_b)
{
	t_node	*cheapest_node;

	cheapest_node = ft_returns_cheapest(*stack_b);
	if (cheapest_node->above_middle && cheapest_node->target_node->above_middle)
		rotate_both(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->above_middle) && \
	!(cheapest_node->target_node->above_middle))
		reverse_rotate_both(stack_a, stack_b, cheapest_node);
	ft_prep_to_push(stack_b, cheapest_node, 'b');
	ft_prep_to_push(stack_a, cheapest_node->target_node, 'a');
	pa(stack_a, stack_b, 1);
}

void	ft_sort_algorithm(t_node **stack_a, t_node **stack_b)
{
	t_node	*smallest_node;
	int		len_stack_a;

	len_stack_a = ft_stack_size(*stack_a);
	if (len_stack_a == 5)
		ft_sort_five_numbers(stack_a, stack_b);
	else
	{
		while (len_stack_a-- > 3)
			pb(stack_a, stack_b, 1);
	}
	ft_sort_three_numbers(stack_a);
	while (*stack_b)
	{
		ft_start_param_nodes(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
	ft_start_current_pos(*stack_a);
	smallest_node = ft_search_smallest(*stack_a);
	if (smallest_node->above_middle)
		while (*stack_a != smallest_node)
			ra(stack_a, 1);
	else
		while (*stack_a != smallest_node)
			rra(stack_a, 1);
}
