/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_param_nodes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-09 10:08:07 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-09 10:08:07 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_init_param_nodes" sets the initial values ​​of the node 
 * parameters.
 * 
 * @param t_node	**stack_a	principal stack.
 * @param t_node	**stack_b	auxiliary stack.
 * 
 */

void	ft_start_param_nodes(t_node *stack_a, t_node *stack_b)
{
	ft_start_current_pos(stack_a);
	ft_start_current_pos(stack_b);
	ft_start_target_node(stack_a, stack_b);
	ft_start_push_price(stack_a, stack_b);
	ft_start_cheapest(stack_b);
}
