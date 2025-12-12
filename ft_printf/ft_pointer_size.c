/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:01:58 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/12 13:36:56 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexptr_size(unsigned long long n)
{
	int	size;

	size = 0;
	if (n >= 16)
		size += ft_hexptr_size(n / 16);
	size += write(1, &"0123456789abcdef"[n % 16], 1);
	return (size);
}

int	ft_pointer_size(void *ptr)
{
	int					size;
	unsigned long long	address;

	address = (unsigned long long)ptr;
	size = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	size += write(1, "0x", 2);
	size += ft_hexptr_size(address);
	return (size);
}
