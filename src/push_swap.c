/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:48:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:48:21 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * PUSH_SWAP it is a simple and very effective algorithm project: you have 
 * to sort data.
 * 
 * You have at your disposal a set of integer values, 2 stacks and a set of
 * instructions for handling both stacks.
 *
 * The program will calculate and display on standard output the smallest 
 * program, created with the Push swap language instructions, that sorts 
 * the integers received as arguments.
 *
 * The function "ft_err_management" handles errors from the main function.
 *
 */

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], 32);
		ft_init(&stack_a, argv, true);
	}
	else if (argc > 2)
		ft_init(&stack_a, argv + 1, false);
	if (!ft_stack_sorted(stack_a))
	{
		if (ft_stack_size(stack_a) == 2)
			sa(&stack_a, 1);
		else if (ft_stack_size(stack_a) == 3)
			ft_sort_three_numbers(&stack_a);
		else
			ft_sort_algorithm(&stack_a, &stack_b);
	}
	ft_free_stack(&stack_a);
	return (0);
}
