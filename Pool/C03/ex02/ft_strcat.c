/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:59:16 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/14 20:44:26 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src [i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		argv[1] = ft_strcat(argv[1], argv[2]);
	}
	printf("%s", argv[1]);
	return 0;
}*/
