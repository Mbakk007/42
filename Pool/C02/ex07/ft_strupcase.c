/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:23:57 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/13 14:45:06 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str [i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "Hola 7";
	ft_strupcase(a);
	printf("%s\n", a);
	return 0;
}*/
