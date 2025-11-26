/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:30 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/19 18:11:11 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	k;

	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || (nb == 1) || (power == 0))
		return (1);
	k = nb;
	while (power != 1)
	{
		nb = nb * k;
		power--;
	}
	return (nb);
}
/*#include <stdio.h>
int	main()
{
	int nb = 5;
	int power = 9;
	int a = ft_iterative_power(nb, power);
	printf("%d", a);
}*/
