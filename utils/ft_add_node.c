/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 09:19:46 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 09:19:46 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
*
* The function "ft_add_node", add the new node to principal stack.
*
* @param t_node **stack Stack where add the new node.
* @param int nbr        new number to add to the stack.
*
*/

void	ft_add_node(t_node **stack, int nbr)
{
	t_node	*node;
	t_node	*tail_node;

	if (stack == NULL)
		return ;
	node = (t_node *)malloc(1 * sizeof(t_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*stack == NULL)
	{
		node->prev = NULL;
		*stack = node;
	}
	else
	{
		tail_node = ft_find_last_node(*stack);
		tail_node->next = node;
		node->prev = tail_node;
	}
}
