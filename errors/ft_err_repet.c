/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_repet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 08:43:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 08:43:40 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_err_repet" verify that the number nb, has not been inserted 
 * before in the stack_a.
 * 
 * @param t_node *stack_a	stack_a where the numbers passed by arguments are 
 *							inserted, being the array to check that the number 
 *							we are going to insert is not repeated.
 * @param int nb			number to check that it is not already inserted.
 * 
 */

int	ft_err_repet(t_node *stack_a, int nb)
{
	if (stack_a == NULL)
		return (0);
	while (stack_a)
	{
		if (stack_a->value == nb)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
