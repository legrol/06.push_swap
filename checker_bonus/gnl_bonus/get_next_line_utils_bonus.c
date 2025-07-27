/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 06:52:59 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-14 06:52:59 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes_bonus/checker_bonus.h"

/**
 * Includes useful and necessary functions for the development of the 
 * "get_next_line_bonus.c" function. 
 * 
 */

size_t	ft_strlen_bonus(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup_bonus(const char *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen_bonus(s);
	str = (char *) malloc((j + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlcpy_bonus(char *dest, const char *src, size_t size)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size < 1)
		return (count);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

char	*ft_strjoin_bonus(char const *s1, char const *s2)
{
	char	*str3;
	size_t	totallen;
	int		i;
	int		j;

	totallen = ft_strlen_bonus(s1) + ft_strlen_bonus(s2);
	i = 0;
	j = 0;
	str3 = (char *) malloc((totallen + 1) * sizeof(char));
	if (!str3)
		return (0);
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str3[i] = s2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}

char	*ft_substr_bonus(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen_bonus(s))
		return (ft_strdup_bonus(""));
	if (len > ft_strlen_bonus(s + start))
		len = ft_strlen_bonus(s + start);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy_bonus(str, (s + start), len + 1);
	return (str);
}
