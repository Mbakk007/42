/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:12 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/15 13:53:22 by ael-bakk         ###   ########.fr       */
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
