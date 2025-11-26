/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:49:28 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/14 15:17:36 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char *s1 = "hla";
	char *s2 = "hola";
	int a = ft_strcmp(s1, s2);
	printf("%d", a);
	return (0);
}*/
