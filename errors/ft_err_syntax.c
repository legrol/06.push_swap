/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_syntax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 07:37:04 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-14 07:37:04 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

/***
 * The function "ft_err_syntax" checks for syntax errors in each number 
 * passed as an argument.
 * 
 * @param const char *str	Array to check.
 * 
 */

int	ft_err_syntax(char *str)
{
	if (!(*str == '+' || *str == '-' || (*str >= 48 && *str <= 57)))
		return (1);
	if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	if (*str == ' ' || *str == '\0' || !*str)
		return (1);
	while (*++str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
	}
	return (0);
}
