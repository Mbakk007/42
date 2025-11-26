/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:07:24 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/14 08:46:27 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || ((!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
						&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
						&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char a[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(a);
	printf("%s\n", a);
	return 0;
}*/
