/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:34:15 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/17 12:01:48 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Validate number string and check for duplicates
int	check(t_list *lst, int n, char *nbr)
{
	t_list	*tmp;
	int		i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	if (!nbr[i])
		return (0);
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	tmp = lst;
	while (tmp)
	{
		if ((int)tmp->content == n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

// Free list and print error
t_list	*init_error(t_list *res)
{
	t_list	*tmp;

	ft_putstr_fd("Error\n", 2);
	while (res)
	{
		tmp = res;
		res = res->next;
		free(tmp);
	}
	return (NULL);
}

// Count total number of arguments after splitting spaces
int	count_args(int ac, char **ag)
{
	int		total;
	int		i;
	int		j;
	char	**tmp;

	total = 0;
	i = 1;
	while (i < ac)
	{
		tmp = ft_split(ag[i], ' ');
		if (!tmp)
			return (-1);
		j = 0;
		while (tmp[j])
		{
			total++;
			j++;
		}
		ft_free_split(tmp);
		i++;
	}
	return (total);
}

// Fill array from all arguments
void	fill_args(char **args, char **ag, int ac)
{
	int		i;
	int		j;
	int		k;
	char	**tmp;

	i = 1;
	k = 0;
	while (i < ac)
	{
		tmp = ft_split(ag[i], ' ');
		j = 0;
		while (tmp[j])
		{
			args[k] = ft_strdup(tmp[j]);
			k++;
			j++;
		}
		ft_free_split(tmp);
		i++;
	}
	args[k] = NULL;
}

// Return array of all arguments
char	**get_args(int ac, char **ag)
{
	char	**args;
	int		total;

	total = count_args(ac, ag);
	args = malloc(sizeof(char *) * (total + 1));
	if (!args)
		return (NULL);
	fill_args(args, ag, ac);
	return (args);
}
