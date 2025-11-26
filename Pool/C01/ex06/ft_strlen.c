/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:48:08 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/12 13:55:09 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

/*#include <stdio.h>
int main(void)
{
	char *str = "42malaga";
	int b;
	b = ft_strlen(str);
	printf("tamañodelstring:%d", b);

}*/
