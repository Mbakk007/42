/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:57:15 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/17 11:59:10 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks if the stack is sorted in ascending order.
int	is_sorted(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current && current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

// Checks if stack_a is fully sorted and has the expected size.
int	is_fully_sorted(t_list **stack, int expected_size)
{
	int	actual_size;

	actual_size = ft_lstsize(*stack);
	if (actual_size != expected_size)
		return (0);
	if (is_sorted(stack) == 0)
		return (0);
	return (1);
}

// Finds the node with the minimum content value in the stack.
t_list	*find_min_lst(t_list **stack)
{
	t_list	*min_node;
	t_list	*current;

	min_node = *stack;
	current = *stack;
	while (current)
	{
		if (current->content < min_node->content)
			min_node = current;
		current = current->next;
	}
	return (min_node);
}

// Finds the node with the maximum content value in the stack.
t_list	*find_max_lst(t_list **stack)
{
	t_list	*max_node;
	t_list	*current;

	max_node = *stack;
	current = *stack;
	while (current)
	{
		if (current->content > max_node->content)
			max_node = current;
		current = current->next;
	}
	return (max_node);
}

// Checks if the stack is sorted in reverse order.
int	is_reverse_sorted(t_swap *tab)
{
	t_list	*current;

	current = tab->stack_a;
	while (current->next)
	{
		if (current->content < current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}
