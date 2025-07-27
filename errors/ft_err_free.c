/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 08:43:17 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 08:43:17 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
*
* The function "ft_err_free" release "stack_a" and "my_argv".
*
* Release stack_a.	"stack_a" is a pointer to a custom data structure (t_node),
* 					which represents a stack. It can be freed directly using 
* 					"free".
*
* Release myargv. 	Freeing "myargv" requires more steps than just calling free
*					once. Each individual string must be freed, and then the 
* 					main array of pointers. The "free_matrix" function is used 
* 					to encapsulate this multiple freeing process.
*
* @param t_node **stack_a 	stack_a that needs to be emptied.
* @param char **myargv 		argv matrix to be emptied.
*
*/

void	ft_err_free(t_node **stack_a, char **my_argv, bool flag_control)
{
	ft_free_stack(stack_a);
	if (flag_control)
		ft_free_matrix(my_argv);
	write (2, "Error\n", 6);
	exit (1);
}
