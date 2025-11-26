/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:37:01 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 11:37:25 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>
#include <stdlib.h>

t_store	*find_in_dict(t_store *dict, char *num)
{
	while (dict)
	{
		if (ft_strcmp(dict->num, num) == 0)
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}

void	print_word(char *word)
{
	if (!word)
		return ;
	ft_putstr(word);
	write(1, " ", 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

int	is_valid_number(char *number)
{
	int	i;

	i = 0;
	if (!number || number[0] == '\0')
		return (0);
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
