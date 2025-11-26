/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:33:32 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/27 12:33:36 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = (int *)malloc(sizeof (int) * (size));
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*#include <stdio.h>
int main()
{
int *range;
    int min;
    int max;
    int size;
    int i;

    min = 0;
    max = 5;
    size = ft_ultimate_range(&range, min, max);

    if (size > 0)
    {
        printf("desde %d a %d hay %d digitos\n", min, max, size);
        i = 0;
        while (i < size)
        {
            printf("%d, ", range[i]);
            i++;
        }
    }
}*/
