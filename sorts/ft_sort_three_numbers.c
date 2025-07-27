/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:48:13 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:48:13 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/***
 * The function "ft_sort_three_numbers", perform an ordering of only three 
 * numbers.
 * 
 * @param t_node	**stack	stack to perform the sort.
 * 
 */

void	ft_sort_three_numbers(t_node **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->value;
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if ((first < second) && (second < third))
		return ;
	else if ((first < second) && (first < third) && (second > third))
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	else if ((first > second) && (first < third) && (second < third))
		sa(stack, 1);
	else if ((first < second) && (first > third) && (second > third))
		rra(stack, 1);
	else if ((first > second) && (first > third) && (second < third))
		ra(stack, 1);
	else if ((first > second) && (first > third) && (second > third))
	{
		ra(stack, 1);
		sa(stack, 1);
	}
}
