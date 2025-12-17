/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:21:03 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/17 12:01:09 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Initial partitioning: pushes mid elements of A to B, rotates otherwise.
void	initial_partition(t_list **stack1, t_list **stack2,
								t_sort *sort, int count){
	int	i;

	i = -1;
	while (++i < count)
	{
		if ((*stack1)->index <= sort->mid)
			pb(stack1, stack2);
		else
		{
			if (ft_lstsize(*stack2) > 1 && (*stack2)->index < (sort->mid / 2))
				rr(stack1, stack2);
			else
				ra(stack1);
		}
	}
	sort->max = sort->mid;
	sort->mid = (sort->max - sort->next) / 2 + sort->next;
	sort->flag++;
}

// Places the next expected element (sort->next) from A or B to A.
void	place_next(t_list **stack1, t_list **stack2, t_sort *sort)
{
	if (ft_lstsize(*stack2) > 0 && ((*stack2)->index == sort->next))
		pa(stack1, stack2);
	else if ((*stack1)->index == sort->next)
	{
		(*stack1)->flag = -1;
		ra(stack1);
		sort->next++;
	}
	else if ((ft_lstsize(*stack2)) > 2
		&& ft_lstlast(*stack2)->index == sort->next)
		rrb(stack2);
	else if ((*stack1)->next->index == sort->next)
		sa(stack1);
	else if ((ft_lstsize(*stack1)) > 1 && ((*stack1)->next->index == sort->next)
		&& ((*stack2)->next->index == sort->next + 1))
		ss(stack1, stack2);
	else
		return ;
	place_next(stack1, stack2, sort);
}

// Partitions from B to A (handles elements from B).
void	partition_a(t_list **stack1, t_list **stack2, t_sort *sort)
{
	int	count_b;
	int	i;

	i = -1;
	count_b = ft_lstsize(*stack2);
	while (ft_lstsize(*stack2) && ++i < count_b)
	{
		if ((*stack2)->index == sort->next)
			place_next(stack1, stack2, sort);
		else if ((*stack2)->index >= sort->mid)
		{
			(*stack2)->flag = sort->flag;
			pa(stack1, stack2);
		}
		else if ((*stack2)->index < sort->mid)
			rb(stack2);
	}
	sort->max = sort->mid;
	sort->mid = (sort->max - sort->next) / 2 + sort->next;
	sort->flag++;
}

// Partitions from A to B (handles elements from A).
void	partition_b(t_list **stack1, t_list **stack2, t_sort *sort)
{
	int	val;

	val = (*stack1)->flag;
	if ((*stack1)->flag != 0)
	{
		while ((*stack1)->flag == val)
		{
			if ((*stack1)->index != sort->next)
				pb(stack1, stack2);
			place_next(stack1, stack2, sort);
		}
	}
	else if ((*stack1)->flag == 0)
	{
		while ((*stack1)->flag != -1)
		{
			if ((*stack1)->index != sort->next)
				pb(stack1, stack2);
			place_next(stack1, stack2, sort);
		}
	}
	if (ft_lstsize(*stack2))
		sort->max = (find_max_lst(stack2))->index;
	sort->mid = (sort->max - sort->next) / 2 + sort->next;
}

// Main sorting function for large stacks.
void	sort_large(t_list **stack1, t_list **stack2, int count)
{
	t_sort	sort;

	sort.next = find_min_lst(stack1)->index;
	sort.max = find_max_lst(stack1)->index;
	sort.mid = sort.max / 2 + sort.next;
	sort.flag = 0;
	initial_partition(stack1, stack2, &sort, count);
	while (!(is_fully_sorted(stack1, count)))
	{
		if (ft_lstsize(*stack2) == 0)
			partition_b(stack1, stack2, &sort);
		else
			partition_a(stack1, stack2, &sort);
	}
}
