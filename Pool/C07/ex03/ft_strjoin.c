/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 07:58:37 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/29 08:03:47 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	count = 0;
	if (size <= 0)
		return (1);
	count = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count + 1);
}

void	ft_copy_strs(char *tab, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			tab[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			tab[k++] = sep[j];
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;

	if (size <= 0)
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = malloc(ft_count(size, strs, sep));
	if (!tab)
		return (NULL);
	ft_copy_strs(tab, strs, sep, size);
	return (tab);
}
/*
int main(void)
{
	int size = 3;
	char *strs[] = {"hola", "que", "tal"};
	char *sep = "////";
	char *result;

	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);

	free(result);
	return 0;
}
*/
