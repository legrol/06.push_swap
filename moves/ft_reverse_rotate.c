/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:47:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:47:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_reverse_rotate" place the last element in the first place,
 * in a stack. The others move down one position.
 * 
 * The function "ra" establishes stack "a" to perform the reverse_rotation.
 * The function "rb" establishes stack "b" to perform the reverse_rotation.
 * The function "rr" establishes stack "a" and stack "b" to perform the 
 * 					 reverse_rotation simultaneously and independently.
 * 
 * @param t_node	**stack		stack to perform the reverse_rotation.
 * @param t_node	**stack_a	stack a.
 * @param t_node	**stack_b	stack b.
 * 
 */

void	ft_reverse_rotate(t_node **stack)
{
	t_node	*last_node;
	int		len;

	len = ft_stack_size(*stack);
	if (NULL == *stack || NULL == stack || len == 1)
		return ;
	last_node = ft_find_last_node(*stack);
	last_node->prev->next = NULL;
	last_node->next = *stack;
	last_node->prev = NULL;
	*stack = last_node;
	last_node->next->prev = last_node;
}

void	rra(t_node	**stack_a, int print)
{
	ft_reverse_rotate(stack_a);
	if (print == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node	**stack_b, int print)
{
	ft_reverse_rotate(stack_b);
	if (print == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node	**stack_a, t_node	**stack_b, int print)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	if (print == 1)
		ft_putstr_fd("rrr\n", 1);
}
