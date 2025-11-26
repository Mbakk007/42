/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:23:56 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/12 17:48:13 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
char src[] = "42malaga";
char dest[20] = "test";

printf("antes: src:%s dest:%s", src, dest);
ft_strcpy(dest, src);
printf("despues: src:%s dest:%s", src, dest);
}*/
