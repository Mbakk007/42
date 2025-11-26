/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:57:13 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 20:16:58 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_size(unsigned int n, char letter)
{
    int size;
    char *base;

    size = 0;
    if (letter == 'x')
        base = "0123456789abcdef";
    else if (letter == 'X')
        base = "0123456789ABCDEF";
    else
        return (0);
    if (n >= 16)
        size += ft_hex_size(n / 16, letter);
    size += ft_putchar_size(base[n % 16]);
    return (size);
}
