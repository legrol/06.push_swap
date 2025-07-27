/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:41:30 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:41:30 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h> // for typedef, malloc
# include <unistd.h> // for write()
# include <stddef.h> // for size_t
# include <fcntl.h> // necessary for GNL (read, etc)

// ============================================================================
// Static variable
// ============================================================================
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

// ============================================================================
// Access to my libraries
// ============================================================================
# include "../../includes/libft.h"
# include "../../includes/ft_printf.h"
# include "../../includes/examft.h"
# include "../../includes/colors.h"
# include "../../includes/push_swap.h"

// ============================================================================
// Main functions
// ============================================================================
char	*get_next_line(int fd);

// ============================================================================
// Useful help functions
// ============================================================================
size_t	ft_strlen_bonus(const char *s);
char	*ft_strchr_bonus(const char *s, int c);
char	*ft_strdup_bonus(const char *s);
size_t	ft_strlcpy_bonus(char *dest, const char *src, size_t size);
char	*ft_strjoin_bonus(char const *s1, char const *s2);
char	*ft_substr_bonus(char const *s, unsigned int start, size_t len);

// ============================================================================
// Bonus function
// ============================================================================
char	*get_next_line_bonus(int fd);

#endif