/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:06:40 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/12/12 13:30:32 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_hex_size(unsigned int n, char letter);
int	ft_pointer_size(void *ptr);
int	ft_putchar_size(int c);
int	ft_putnbr_size(int nb);
int	ft_putstr_size(char *str);
int	ft_putunsigned_size(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
