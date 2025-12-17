/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 22:58:52 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/16 18:39:53 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

// Struct for sorting parameters
typedef struct s_sort
{
	int	next;	// Next element to process
	int	max;	// Maximum value
	int	mid;	// Midpoint
	int	flag;	// Flag for sorting state or conditions
}	t_sort;

// Main struct for push_swap stacks and sizes
typedef struct s_swap
{
	t_list	*stack_a;	// Linked list for stack A
	t_list	*stack_b;	// Linked list for stack B
	int		asize;		// Size of stack A
	int		bsize;		// Size of stack B
}	t_swap;

// Stack operations
void	pa(t_list **stack1, t_list **stack2);	// Push top of stack2 to stack1
void	pb(t_list **stack1, t_list **stack2);	// Push top of stack1 to stack2
void	rra(t_list **stack1);					// Rotate stack1 down
void	rrb(t_list **stack2);					// Rotate stack2 down
void	ra(t_list **stack1);					// Rotate stack1 up
void	rb(t_list **stack2);					// Rotate stack2 up
void	sa(t_list **stack1);					// Swap top two of stack1
void	sb(t_list **stack2);					// Swap top two of stack2
void	ss(t_list **stack1, t_list **stack2);	// Swap both stacks
void	rr(t_list **stack1, t_list **stack2);	// Rotate both stacks up

// Initialization and validation
int		check(t_list *lst, int n, char *nbr);	// Validate number
t_list	*init(char **ag);			// Init stack from args

// Sorting functions
void	sort_three_nbr(t_swap *tab);
void	sort_five_nbr(t_swap *tab);
void	choose_sort(t_swap *tab);
void	sort_large(t_list **stack1, t_list **stack2, int count);

// Sorting helpers
void	partition_b(t_list **stack1, t_list **stack2, t_sort *sort);
void	partition_a(t_list **stack1, t_list **stack2, t_sort *sort);
void	place_next(t_list **stack1, t_list **stack2, t_sort *sort);
void	initial_partition(t_list **stack1, t_list **stack2,
			t_sort *sort, int count);

// Utility functions
int		is_reverse_sorted(t_swap *tab);
t_list	*find_max_lst(t_list **stack);
t_list	*find_min_lst(t_list **stack);
int		is_fully_sorted(t_list **stack, int expected_size);
int		is_sorted(t_list **stack);
void	index_replace(t_list *lst, int n, int to);
int		min_nbr(t_list *lst);
void	add_index(t_list *lst);
void	ft_free_split(char **split);

// Input utilities (input_utils.c)
char	**get_args(int ac, char **ag);
int		count_args(int ac, char **ag);
void	fill_args(char **args, char **ag, int ac);
t_list	*init_error(t_list *res);

#endif
