/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:47:34 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:47:34 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_rotate" place the first element in the last place, in a 
 * stack. The others move up one position.
 * 
 * The function "ra" establishes stack "a" to perform the rotation.
 * The function "rb" establishes stack "b" to perform the rotation.
 * The function "rr" establishes stack "a" and stack "b" to perform the rotation,
 * 					 simultaneously and independently.
 * 
 * @param t_node	**stack		stack to perform the rotation.
 * @param t_node	**stack_a	stack a.
 * @param t_node	**stack_b	stack b.
 * 
 */

void	ft_rotate(t_node **stack)
{
	t_node	*last_node;
	int		len;

	len = ft_stack_size(*stack);
	if (NULL == *stack || NULL == stack || len == 1)
		return ;
	last_node = ft_find_last_node(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_node	**stack_a, int print)
{
	ft_rotate(stack_a);
	if (print == 1)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_node	**stack_b, int print)
{
	ft_rotate(stack_b);
	if (print == 1)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_node	**stack_a, t_node	**stack_b, int print)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (print == 1)
		ft_putstr_fd("rr\n", 1);
}
