/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:47:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:47:47 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_swap" swap the top two nodes between them in a stack.
 * 
 * The function "sa" establishes stack "a" to perform the swap.
 * The function "sb" establishes stack "b" to perform the swap.
 * The function "ss" establishes stack "a" and stack "b" to perform the swap,
 * 					 regardless.
 * 
 * @param t_node	**stack		stack to perform the swap.
 * @param t_node	**stack_a	stack a.
 * @param t_node	**stack_b	stack b.
 * @param int 		print		Boolean to print or not the function name on	
 * 								screen.
 * 
 */

void	ft_swap(t_node **stack)
{
	int	len;

	len = ft_stack_size(*stack);
	if (*stack == NULL || stack == NULL || len == 1)
		return ;
	*stack = (*stack)->next;
	(*stack)->prev->prev = *stack;
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}

void	sa(t_node	**stack_a, int print)
{
	ft_swap(stack_a);
	if (print == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_node	**stack_b, int print)
{
	ft_swap(stack_b);
	if (print == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_node	**stack_a, t_node	**stack_b, int print)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	if (print == 1)
		ft_putstr_fd("ss\n", 1);
}
