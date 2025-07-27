/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 08:44:19 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-05 08:44:19 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/**
*
* The function "" frees the array my_argv. It first frees each node and then 
* frees the main array.
*
* @param char **my_argv Array to free.
*
*/

void	ft_free_matrix(char **my_argv)
{
	int	i;

	i = 0;
	if (my_argv == NULL || *my_argv == NULL)
		return ;
	while (my_argv[i])
	{
		free(my_argv[i]);
		i++;
	}
	free(my_argv);
}
