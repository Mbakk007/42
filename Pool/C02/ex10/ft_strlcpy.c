/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:13:11 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/14 08:40:33 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (src[y] != '\0')
		y++;
	if (size == 0)
		return (y);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (y);
}

/*#include <stdio.h>

int main() {
    char src[] = "42, Malaga";
    char dest[50];
    unsigned int a = ft_strlcpy(dest, src, sizeof dest);

    printf("Copied string: %s\n", dest);
    printf("Length of src: %u\n", a);
    return 0;
}*/
