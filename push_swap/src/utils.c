/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:05:35 by ael-bakk          #+#    #+#             */
/*   Updated: 2026/01/05 14:26:41 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Replaces the index of the node with the given content value.
void	index_replace(t_list *lst, int n, int to)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->index == -1 && tmp->content == n)
			break ;
		tmp = tmp->next;
	}
	tmp->index = to;
}

// Finds the minimum content value among nodes with no index (-1).
int	min_nbr(t_list *lst)
{
	t_list		*tmp;
	long int	min_val;

	min_val = LONG_MAX;
	tmp = lst;
	while (tmp)
	{
		if (tmp->index == -1 && tmp->content < min_val)
			min_val = tmp->content;
		tmp = tmp->next;
	}
	return (min_val);
}

// Assigns indices to all nodes in the list.
// Indices start at 0 for the smallest value, up to len-1 for the largest.
void	add_index(t_list *lst)
{
	int	len;
	int	min_val;
	int	i;

	i = 0;
	len = ft_lstsize(lst);
	while (i < len)
	{
		min_val = min_nbr(lst);
		index_replace(lst, min_val, i);
		i++;
	}
}

// - split: The array to free.
void	ft_free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
