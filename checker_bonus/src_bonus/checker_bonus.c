/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 06:41:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-08-21 06:41:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"
#include "../includes_bonus/checker_bonus.h"

/**
 * CHECKER This program takes as argument the stack_a in the form of a list of
 * integers. The first argument must be on top of the stack. If no argument is
 * given, checker terminates and does not print anything.
 * 
 * During the execution of checker it will wait and read a list of 
 * instructions, separated using ’\n’. When all instructions have been read, 
 * checker will execute them using the stack received as argument.
 * 
 * If after executing all instructions, stack a is sorted and stack b is empty,
 * then the checker program will print “OK” followed by a ’\n’ on stdout.
 * 
 * In any other case, it should print “KO” followed by a ’\n’ on stdout.
 * 
 * In case of error, you should print Error followed by a ’\n’ on stderr. 
 * Errors include, for example, some or all arguments are not integers, some 
 * or all arguments are larger than an integer, there are duplicates, an 
 * instruction does not exist and/or is not in the correct format.
 *
 * Parameters in ft_parser_ops
 *
 * @param t_node **stack_a
 * @param t_node **stack_b
 * @param char *parser_ops
 *
 * Parameters in "ft_error"
 *
 * @param t_node **stack_a
 * @param t_node **stack_b
 *
 * Parameters in "ft_control_nl"
 *
 * @param t_node **stack_a
 * @param t_node **stack_b
 * 
 */

static void	ft_error(t_node **stack_a, t_node **stack_b)
{
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	write (2, "Error\n", 6);
	exit (1);
}

static int	ft_parser_ops(t_node **stack_a, t_node **stack_b, char *ops)
{
	if (!ft_strcmp(ops, "pa\n"))
		pa(stack_a, stack_b, 0);
	else if (!ft_strcmp(ops, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(ops, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(ops, "sb\n"))
		sb(stack_b, 0);
	else if (!ft_strcmp(ops, "ss\n"))
		ss(stack_a, stack_b, 0);
	else if (!ft_strcmp(ops, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(ops, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(ops, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(ops, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(ops, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(ops, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else
		ft_error(stack_a, stack_b);
	return (1);
}

static void	ft_control_nl(t_node *stack_a, t_node *stack_b)
{
	char	*nextline;
	int		size;

	size = ft_stack_size(stack_a);
	nextline = get_next_line_bonus(STDIN_FILENO);
	while (nextline)
	{
		ft_parser_ops(&stack_a, &stack_b, nextline);
		nextline = get_next_line_bonus(STDIN_FILENO);
	}
	if (ft_stack_sorted(stack_a) && ft_stack_size(stack_a) == size)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], 32);
		ft_init(&stack_a, argv, true);
	}
	else if (argc > 2)
		ft_init(&stack_a, argv + 1, false);
	ft_control_nl(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
}
