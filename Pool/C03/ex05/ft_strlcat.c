/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:45:18 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/15 13:47:29 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
/*#include <stdio.h>
int main() {
 	char dest[20] = "hola";
	char src[20] = "quee";
	unsigned int result = ft_strlcat(dest, src, sizeof(dest));
	printf("Result: %s\n", dest);
	printf("Length: %d\n", result);
	return (0);
}*/
