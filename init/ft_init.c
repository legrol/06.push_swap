/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 09:11:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 09:11:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
 * The function "ft_init" performs various prior checks on the argument to be 
 * inserted in stack_a:
 *		- syntax errors
 *		- check if number is integer
 *		- repeated number errors
 * 
 * @param t_node **stack_a	stack to check.
 * @param char	 **argv		arg to insert.
 * 
 */

void	ft_init(t_node **stack_a, char **my_argv, bool flag_control)
{
	long	number;
	int		i;

	i = 0;
	while (my_argv[i])
	{
		if (ft_err_syntax(my_argv[i]))
			ft_err_free(stack_a, my_argv, flag_control);
		number = ft_atol(my_argv[i]);
		if (number < INT_MIN || number > INT_MAX)
			ft_err_free(stack_a, my_argv, flag_control);
		if (ft_err_repet(*stack_a, (int)number))
			ft_err_free(stack_a, my_argv, flag_control);
		ft_add_node(stack_a, (int)number);
		++i;
	}
	if (flag_control)
		ft_free_matrix(my_argv);
}
