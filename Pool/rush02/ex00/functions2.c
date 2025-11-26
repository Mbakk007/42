/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:38:14 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 11:39:16 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*trim(char *str)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(str);
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	while (end > start && (str[end - 1] == ' ' || str[end - 1] == '\t'
			|| str[end - 1] == '\n' || str[end - 1] == '\r'))
		end--;
	str[end] = '\0';
	return (str + start);
}
