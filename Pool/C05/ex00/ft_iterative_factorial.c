/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:58:28 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/19 17:07:29 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial = i * factorial;
		i++;
	}
	return (factorial);
}

/*#include <stdio.h>
int main()
{
	int nb = 5;
	int a = ft_iterative_factorial(nb);
	printf("%d", a);
}*/
