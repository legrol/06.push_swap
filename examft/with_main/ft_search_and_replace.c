/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 09:09:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-07-31 09:09:40 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/***
 * 
 * Assignment name  : ft_search_and_replace
 * Expected files   : ft_search_and_replace.c
 * Allowed functions: write, exit
 * ------------------------------------------------------------------
 * 
 * Write a program called ft_search_and_replace that takes 3 arguments, the first
 * arguments is a string in which to replace a letter (2nd argument) by
 * another one (3rd argument).
 * 
 * If the number of arguments is not 3, just display a newline.
 * 
 * If the second argument is not contained in the first one (the string)
 * then the program simply rewrites the string followed by a newline.
 * 
 * Examples:
 * $>./ft_search_and_replace "Papache est un sabre" "a" "o"
 * Popoche est un sobre
 * $>./ft_search_and_replace "zaz" "art" "zul" | cat -e
 * $
 * $>./ft_search_and_replace "zaz" "r" "u" | cat -e
 * zaz$
 * $>./ft_search_and_replace "jacob" "a" "b" "c" "e" | cat -e
 * $
 * $>./ft_search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
 * ZaZ eT David aiME le METal.$
 * $>./ft_search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e"
 *  | cat -e
 * eNcOre Un ExEmPle Pas Facile a Ecrire $
 *  
 */

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
