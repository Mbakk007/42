/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:37:36 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 16:41:13 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr_size(char *str)
{
    int size;

    size = 0;
    if (!str)
    	return (ft_putstr_size("(null)"));
    while(str[size])
    {
        write(1, &str[size], 1);
        size++;
    }
    return (size);
}
