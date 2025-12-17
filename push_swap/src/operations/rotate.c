/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:58:03 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/16 17:16:57 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*head;

	if (!(*stack) || !((*stack)->next))
		return ;
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	ft_lstlast(*stack)->next = head;
}

void	ra(t_list **stack1)
{
	rotate(stack1);
	ft_printf("ra\n");
}

void	rb(t_list **stack2)
{
	rotate(stack2);
	ft_printf("rb\n");
}

void	rr(t_list **stack1, t_list **stack2)
{
	rotate(stack1);
	rotate(stack2);
	ft_printf("rr\n");
}
