/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:43 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/09 19:26:52 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
	{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*#include <unistd.h>
int main()
{
       int a = 11;
       int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("result:%d\n", a);
	printf("remainder:%d\n", b);
	return 0;
}*/
