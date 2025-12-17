/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:17:13 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/17 11:58:00 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorts a stack of 3 elements using minimal operations.
void	sort_three_nbr(t_swap *tab)
{
	t_list	*last;

	if (is_sorted(&tab->stack_a))
		return ;
	last = ft_lstlast(tab->stack_a);
	if (is_reverse_sorted(tab))
	{
		sa(&tab->stack_a);
		rra(&tab->stack_a);
	}
	else if (tab->stack_a->content < last->content
		&& tab->stack_a->next->content < last->content)
		sa(&tab->stack_a);
	else if (tab->stack_a->content > last->content
		&& tab->stack_a->next->content < last->content)
		ra(&tab->stack_a);
	else if (tab->stack_a->content < last->content
		&& tab->stack_a->next->content > last->content)
	{
		sa(&tab->stack_a);
		ra(&tab->stack_a);
	}
	else if (tab->stack_a->content > last->content
		&& tab->stack_a->next->content > last->content)
		rra(&tab->stack_a);
}

// Sorts 5 elements by pushing smallest 2 to B, sorting 3 in A, then merging.
void	sort_five_nbr(t_swap *tab)
{
	int	len;

	len = ft_lstsize(tab->stack_a);
	while (len--)
	{
		if (tab->stack_a->index == 0 || tab->stack_a->index == 1)
		{
			pb(&tab->stack_a, &tab->stack_b);
			tab->asize--;
			tab->bsize++;
		}
		else
			ra(&tab->stack_a);
	}
	sort_three_nbr(tab);
	pa(&tab->stack_a, &tab->stack_b);
	tab->asize++;
	tab->bsize--;
	pa(&tab->stack_a, &tab->stack_b);
	tab->asize++;
	tab->bsize--;
	if (tab->stack_a->content > tab->stack_a->next->content)
		sa(&tab->stack_a);
}

// checks size and calls appropriate function.
// For larger stacks, calls sort_large.
void	choose_sort(t_swap *tab)
{
	int	len;

	len = ft_lstsize(tab->stack_a);
	if (is_sorted(&tab->stack_a))
		return ;
	if (len == 2)
	{
		if (tab->stack_a->content > tab->stack_a->next->content)
			sa(&tab->stack_a);
	}
	else if (len == 3)
		sort_three_nbr(tab);
	else if (len == 5)
		sort_five_nbr(tab);
	else
		sort_large(&tab->stack_a, &tab->stack_b, len);
}
