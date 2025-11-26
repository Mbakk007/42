/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:03:23 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 12:03:58 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>
#include <stdlib.h>

static void	free_mem(t_store *dict)
{
	t_store	*tmp;

	while (dict)
	{
		tmp = dict->next;
		free(dict->num);
		free(dict->value);
		free(dict);
		dict = tmp;
	}
}

static void	print_rule(void)
{
	write(2, "./rush-02 [dict_path] [number]\n", 31);
}

static int	error_check(

	char *dict_path,
	char *number,
	int *count,
	t_store **dict )
{
	if (!is_valid_number(number))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	*dict = parse(dict_path, count);
	if (!(*dict))
	{
		write(2, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_store	*dict;
	int		count;
	char	*number;
	char	*dict_path;

	dict = NULL;
	count = 0;
	if (argc == 2)
	{
		dict_path = "numbers.dict";
		number = argv[1];
	}
	else if (argc == 3)
	{
		dict_path = argv[1];
		number = argv[2];
	}
	else
		return (print_rule(), 1);
	if (error_check(dict_path, number, &count, &dict))
		return (1);
	convert_number(number, dict);
	free_mem(dict);
	return (0);
}
