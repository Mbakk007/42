/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:55:32 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/16 17:17:26 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dest)
{
	t_list	*next_src;

	if (!*src)
		return ;
	next_src = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = next_src;
}

void	pa(t_list **stack1, t_list **stack2)
{
	push(stack2, stack1);
	ft_printf("pa\n");
}

void	pb(t_list **stack1, t_list **stack2)
{
	push(stack1, stack2);
	ft_printf("pb\n");
}
