/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:47:14 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:47:14 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_push" move the top node of src to the top zone of dst.
 * 
 * The function "pa" configure the stack "a" as src and stack_b like dst.
 * The function "pb" configure the stack "b" as dst and stack_a like src.
 * 
 * @param t_node **dst		destination stack.
 * @param t_node **src		source stack.
 * @param t_node **stack_a	stack a.
 * @param t_node **stack_b	stack b.
 * 
 */

void	ft_push(t_node **dst, t_node **src)
{
	t_node	*node_to_push;

	if (*src == NULL)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_to_push->prev = NULL;
	if (*dst == NULL)
	{
		node_to_push->next = NULL;
		*dst = node_to_push;
	}
	else
	{
		node_to_push->next = *dst;
		node_to_push->next->prev = node_to_push;
		*dst = node_to_push;
	}
}

void	pa(t_node	**stack_a, t_node	**stack_b, int print)
{
	ft_push(stack_a, stack_b);
	if (print == 1)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_node	**stack_a, t_node	**stack_b, int print)
{
	ft_push(stack_b, stack_a);
	if (print == 1)
		ft_putstr_fd("pb\n", 1);
}
