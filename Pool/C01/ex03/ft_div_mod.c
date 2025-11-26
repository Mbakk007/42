/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:30:47 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/10/09 19:24:12 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
	{
	*div = a / b;
	*mod = a % b;
}
/*
	#include <stdio.h>
int main(void)
	{
	int a = 7;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("result:%d\n", div);
	printf("remainder:%d\n", mod);
	return(0);	
	}
	*/
