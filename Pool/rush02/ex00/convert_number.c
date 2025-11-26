/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:33:27 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 10:38:26 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

static void	copy_group(char *dst, char *src, int start, int end)
{
	int	i;

	i = 0;
	while (start + i < end)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
}

static int	group(char group[20][4], char *number)
{
	int	len;
	int	start;
	int	end;
	int	gcount;

	len = ft_strlen(number);
	gcount = 0;
	while (len > 0 && gcount < 20)
	{
		end = len;
		start = len - 3;
		if (start < 0)
			start = 0;
		copy_group(group[gcount], number, start, end);
		len = start;
		gcount++;
	}
	return (gcount);
}

static void	print_with_scale(
	int gcount, char group[20][4], t_store *dict, char **scales)
{
	int		n;
	t_store	*f;

	n = ft_atoi(group[gcount]);
	if (n == 0)
		return ;
	print_hundreds(n, dict);
	if (gcount > 0 && scales[gcount - 1])
	{
		f = find_in_dict(dict, scales[gcount - 1]);
		if (f)
			print_word(f->value);
	}
}

static void	print_group(char group[20][4], int gcount, t_store *dict)
{
	char	*scales[12];

	scales[0] = "1000";
	scales[1] = "1000000";
	scales[2] = "1000000000";
	scales[3] = "1000000000000";
	scales[4] = "1000000000000000";
	scales[5] = "1000000000000000000";
	scales[6] = "1000000000000000000000";
	scales[7] = "1000000000000000000000000";
	scales[8] = "1000000000000000000000000000000";
	scales[9] = "1000000000000000000000000000000000";
	scales[10] = "1000000000000000000000000000000000000";
	scales[11] = NULL;
	while (gcount > 0)
	{
		gcount--;
		print_with_scale(gcount, group, dict, scales);
	}
}

void	convert_number(char *number, t_store *dict)
{
	char	group_arr[20][4];
	int		gcount;
	t_store	*f;

	if (ft_strcmp(number, "0") == 0)
	{
		f = find_in_dict(dict, "0");
		if (f)
			print_word(f->value);
		write(1, "\n", 1);
		return ;
	}
	gcount = group(group_arr, number);
	print_group(group_arr, gcount, dict);
	write(1, "\n", 1);
}
