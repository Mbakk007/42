/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:26:52 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 20:06:58 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_size(int nb)
{
    int size;
    long int n;

    n = nb;
    size = 0;
    if (n < 0)
    {
        size += ft_putchar_size('-');
        n *= -1;
    }
    if ( n > 9)
        size += ft_putnbr_size(n / 10);
    size += ft_putchar_size((n % 10) + '0');
    return(size);
}
