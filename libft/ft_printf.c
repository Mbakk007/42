/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:08:50 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/12 13:29:02 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char letter);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			size += ft_format(args, str[i + 1]);
			i += 2;
		}
		else
		{
			size += ft_putchar_size(str[i]);
			i++;
		}
	}
	va_end(args);
	return (size);
}

static int	ft_format(va_list args, const char letter)
{
	int	size;

	size = 0;
	if (letter == 'c')
		size += ft_putchar_size(va_arg(args, int));
	else if (letter == 's')
		size += ft_putstr_size(va_arg(args, char *));
	else if (letter == 'p')
		size += ft_pointer_size(va_arg(args, void *));
	else if (letter == 'd' || letter == 'i')
		size += ft_putnbr_size(va_arg(args, int));
	else if (letter == 'u')
		size += ft_putunsigned_size(va_arg(args, unsigned int));
	else if (letter == 'x' || letter == 'X')
		size += ft_hex_size(va_arg(args, unsigned int), letter);
	else if (letter == '%')
		size += ft_putchar_size('%');
	return (size);
}
