/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:44:22 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 11:44:45 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

static void	print_tens(int t, int o, t_store *dict)
{
	char	num[4];
	t_store	*found;

	num[0] = t + '0';
	num[1] = '0';
	num[2] = '\0';
	found = find_in_dict(dict, num);
	if (found)
		print_word(found->value);
	if (o > 0)
	{
		num[0] = o + '0';
		num[1] = '\0';
		found = find_in_dict(dict, num);
		if (found)
			print_word(found->value);
	}
}

static void	print_teens(int o, t_store *dict)
{
	char	num[4];
	t_store	*found;

	num[0] = '1';
	num[1] = o + '0';
	num[2] = '\0';
	found = find_in_dict(dict, num);
	if (found)
		print_word(found->value);
}

static void	print_ones(int o, t_store *dict)
{
	char	num[4];
	t_store	*found;

	if (o <= 0)
		return ;
	num[0] = o + '0';
	num[1] = '\0';
	found = find_in_dict(dict, num);
	if (found)
		print_word(found->value);
}

static void	print_tens_and_ones(int t, int o, t_store *dict)
{
	if (t > 1)
		print_tens(t, o, dict);
	else if (t == 1)
		print_teens(o, dict);
	else
		print_ones(o, dict);
}

void	print_hundreds(int n, t_store *dict)
{
	char	num[4];
	t_store	*found;
	int		h;
	int		t;
	int		o;

	h = n / 100;
	t = (n / 10) % 10;
	o = n % 10;
	if (h > 0)
	{
		num[0] = h + '0';
		num[1] = '\0';
		found = find_in_dict(dict, num);
		if (found)
			print_word(found->value);
		found = find_in_dict(dict, "100");
		if (found)
			print_word(found->value);
	}
	print_tens_and_ones(t, o, dict);
}
