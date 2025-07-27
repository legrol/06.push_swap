/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:43:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:43:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// ============================================================================
// Libraries
// ============================================================================
# include <unistd.h>	// for write...
# include <stdlib.h>	// for typedef, malloc...
# include <signal.h>	// for SIGNAL, SIGUSR1, SIGSEGV...
# include <stdio.h>		// for printf...
# include <sys/types.h>	// for ssize_t, useconds_t...
# include <limits.h>	// for INT_MAX, INT_MIN...
# include <stdbool.h>	// for boolean...
# include <stdint.h>	// for uint, SIZE_MAX...
# include <stddef.h>	// for size_t...

// ============================================================================
// Access to my libraries
// ============================================================================
# include "libft.h"
# include "ft_printf.h"
# include "examft.h"
# include "colors.h"

// ============================================================================
// Useful data in each of the nodes
// ============================================================================
typedef struct s_node
{
	int				value;
	int				current_pos;
	int				push_price;
	bool			above_middle;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

// ============================================================================
// Functions moves - Commands
// ============================================================================
void	ft_push(t_node **dst, t_node **src);
void	pa(t_node	**stack_a, t_node	**stack_b, int print);
void	pb(t_node	**stack_a, t_node	**stack_b, int print);
void	ft_swap(t_node **stack);
void	sa(t_node	**stack_a, int print);
void	sb(t_node	**stack_b, int print);
void	ss(t_node	**stack_a, t_node	**stack_b, int print);
void	ft_rotate(t_node **stack);
void	ra(t_node	**stack_a, int print);
void	rb(t_node	**stack_b, int print);
void	rr(t_node	**stack_a, t_node	**stack_b, int print);
void	ft_reverse_rotate(t_node **stack);
void	rra(t_node	**stack_a, int print);
void	rrb(t_node	**stack_b, int print);
void	rrr(t_node	**stack_a, t_node	**stack_b, int print);
void	ft_prep_to_push(t_node **stack, t_node *top_node, char stack_name);

// ============================================================================
// Functions init stacks and init nodes
// ============================================================================
void	ft_init(t_node **stack_a, char **my_argv, bool flag_control);
void	ft_start_param_nodes(t_node *stack_a, t_node *stack_b);
void	ft_start_current_pos(t_node *stack);
void	ft_start_target_node(t_node *stack_a, t_node *stack_b);
void	ft_start_push_price(t_node *stack_a, t_node *stack_b);
void	ft_start_cheapest(t_node *stack);

// ============================================================================
// Functions handle errors and releases
// ============================================================================
int		ft_err_syntax(char *str);
int		ft_err_repet(t_node *stack_a, int nb);
void	ft_err_free(t_node **stack_a, char **my_argv, bool flag_control);
void	ft_free_matrix(char **my_argv);
void	ft_free_stack(t_node **stack);

// ============================================================================
// Functions sorts - Algorithms
// ============================================================================
void	ft_sort_three_numbers(t_node	**stack);
void	ft_sort_five_numbers(t_node	**stack_a, t_node	**stack_b);
void	ft_sort_big_numbers(t_node	**stack_a, t_node	**stack_b);
void	ft_sort_algorithm(t_node	**stack_a, t_node	**stack_b);

// ============================================================================
// Functions utils
// ============================================================================
void	ft_add_node(t_node **stack, int nbr);
long	ft_atol(const char *str);
t_node	*ft_find_last_node(t_node *stack);
t_node	*ft_returns_cheapest(t_node *stack);
t_node	*ft_search_smallest(t_node *stack);
bool	ft_stack_sorted(t_node *stack);
int		ft_stack_size(t_node *stack);

#endif