/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 09:05:04 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-07-31 09:05:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examft.h"

/**
 * 
 * Assignment name  : ft_list_foreach
 * Expected files   : ft_list_foreach.c, ft_list.h
 * Allowed functions:
 * ---------------------------------------------------------------
 * 
 * Write a function that takes a list and a function pointer, and applies this
 * function to each element of the list.
 * 
 * It must be declared as follows:
 * 
 * void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
 * 
 * The function pointed to by f will be used as follows:
 * 
 * (*f)(list_ptr->data);
 * 
 * You must use the following structure, and turn it in as a file called
 * ft_list.h: (allocated in examft.h)
 * 
 * typedef struct    s_list
 * {
 *     struct s_list *next;
 *     void          *data;
 * }                 t_list;
 * 
 */

void	ft_list_foreach(t_list_3 *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
