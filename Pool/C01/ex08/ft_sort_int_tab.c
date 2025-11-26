/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:20:01 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/21 09:53:20 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	intcmp(int *a, int *b)
{
	if (*a == *b)
		return (0);
	else
		return (*a - *b);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sort;

	i = 0;
	sort = 1;
	while (sort != 0)
	{
		sort = 0;
		i = 0;
		while (i < size - 1)
		{
			if (intcmp(&tab[i], &tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				sort = 1;
			}
			i++;
		}
	}
}
/*#include <stdio.h>
int main()
{
	int tab[] = {1, 5, 4, 2, 3};
	int i = 0;
	int size = 5;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
