/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:33:44 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/27 12:33:50 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((sizeof(int) * (size)));
	if (!range)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*#include <stdio.h>
int main()
{
	int min = 1;
	int max = 80;
	while (min < max)
	{
		printf("%d\n", *ft_range(min, max));
		min++;
	}
}*/
