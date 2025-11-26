/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:59:51 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/21 09:16:50 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*#include <stdio.h>
int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
    	{
        	printf("%d ", tab[i]);
        	i++;
    	}
}*/
