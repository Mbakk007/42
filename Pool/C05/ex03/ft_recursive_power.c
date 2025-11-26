/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:12:33 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/19 18:19:23 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || (nb == 1) || (power == 0))
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*#include <stdio.h>
int main()
{
	int nb = 5;
	int power = 9;
	int a = ft_recursive_power(nb, power);
	printf("%d", a);
}*/
