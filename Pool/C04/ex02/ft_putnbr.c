/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:57:45 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/16 08:43:21 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr (i / 10);
	}
	ft_putchar((i % 10) + '0');
}
#include <stdio.h>
int main()
{
	int c = -20;
	ft_putnbr(c);
	return 0;
}
