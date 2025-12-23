/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:11:24 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/22 22:33:07 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Initialize stack from arguments
t_list	*init(char **ag)
{
	t_list		*res;
	t_list		*tmp;
	long int	n;
	int			i;

	i = 0;
	res = NULL;
	while (ag[i])
	{
		n = ft_atoi(ag[i]);
		if (!check(res, n, ag[i]) || n < -2147483648 || n > 2147483647)
			return (init_error(res));
		tmp = ft_lstnew(n);
		ft_lstadd_back(&res, tmp);
		i++;
	}
	return (res);
}

int	main(int ac, char **ag)
{
	t_swap	*tab;
	char	**args;

	if (ac < 2)
		return (0);
	tab = ft_calloc(1, sizeof(t_swap));
	if (!tab)
		return (-1);
	args = get_args(ac, ag);
	if (!args)
		return (free(tab), -1);
	tab->stack_a = init(args);
	if (!tab->stack_a)
		return (ft_free_split(args), free(tab), -1);
	tab->asize = ft_lstsize(tab->stack_a);
	add_index(tab->stack_a);
	choose_sort(tab);
	ft_free_split(args);
	ft_lstclear(&tab->stack_a);
	ft_lstclear(&tab->stack_b);
	free(tab);
	return (0);
}
