/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:49:24 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 20:17:45 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned_size(unsigned int n)
{
    int size;

    size = 0;

    if (n > 9)
        size += ft_putunsigned_size(n / 10);
    size += ft_putchar_size((n % 10) + '0');
    return (size);
}
