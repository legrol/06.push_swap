/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 08:30:43 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-07-31 08:30:43 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * Assignment name  : ft_do_op
 * Expected files   : *.c, *.h
 * Allowed functions: atoi, printf, write
 * ------------------------------------------------------------------
 * 
 * Write a program that takes three strings:
 * - The first and the third one are representations of base-10 signed integers
 * that fit in an int.
 * - The second one is an arithmetic operator chosen from: + - * / %
 * 
 * The program must display the result of the requested arithmetic operation,
 * followed by a newline. If the number of parameters is not 3, the program
 * just displays a newline.
 * 
 * You can assume the string have no mistakes or extraneous characters. 
 * Negative numbers, in input or output, will have one and only one leading 
 * '-'. The result of the operation fits in an int.
 * 
 * Examples:
 * 
 * $> ./ft_do_op "123" "*" 456 | cat -e
 * 56088$
 * $> ./ft_do_op "9828" "/" 234 | cat -e
 * 42$
 * $> ./ft_do_op "1" "+" "-43" | cat -e
 * -42$
 * $> ./ft_do_op | cat -e
 * $
 * 
 */

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%i", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%i", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%i", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%i", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '%')
			printf("%i", atoi(argv[1]) % atoi(argv[3]));
	}
	write (1, "\n", 1);
	return (0);
}
