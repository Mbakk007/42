/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:54:38 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 10:17:33 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] && j < size)
		j++;
	while (src[k])
		k++;
	if (j == size)
		return (size + k);
	while (src[i] && (j + i < size - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j + i < size)
		dest[j + i] = '\0';
	return (j + k);
}
