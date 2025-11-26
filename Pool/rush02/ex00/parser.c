/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:27:29 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 11:28:07 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

void	add_to_dict(t_dict *dict, char *num, char *value)
{
	t_store	*new_node;

	if (dict->index >= MAX_DICT_SIZE)
	{
		write(2, "Dict full\n", 14);
		return ;
	}
	new_node = malloc(sizeof(t_store));
	if (!new_node)
		return (write(2, "Memory Error\n", 13), (void)0);
	new_node->num = ft_strdup(num);
	new_node->value = ft_strdup(value);
	new_node->next = NULL;
	if (!dict->head)
		dict->head = new_node;
	else
		dict->tail->next = new_node;
	dict->tail = new_node;
	dict->index++;
}

void	ft_line(t_dict *dict, char *line)
{
	char	*num;
	char	*value;
	int		i;

	i = 0;
	while (line[i] && line[i] != ':')
		i++;
	if (!line[i])
		return ((void)write(2, "Dict Error\n", 11));
	line[i] = '\0';
	num = trim(line);
	value = trim(line + i + 1);
	i = 0;
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
			return ((void)write(2, "Dict Error\n", 11));
		i++;
	}
	add_to_dict(dict, num, value);
}

static void	read_file(int fd, t_dict *dict)
{
	ssize_t	bytes;
	char	buf[MAX_LINE_SIZE];
	int		pos;
	int		i;

	pos = 0;
	bytes = read(fd, buf, sizeof(buf));
	while (bytes > 0)
	{
		i = 0;
		while (i < bytes)
		{
			if (buf[i] == '\n' || pos >= MAX_LINE_SIZE - 1)
			{
				buf[pos] = '\0';
				if (trim(buf)[0])
					ft_line(dict, buf);
				pos = 0;
			}
			else
				buf[pos++] = buf[i];
			i++;
		}
		bytes = read(fd, buf, sizeof(buf));
	}
}

t_store	*parse(const char *path, int *count)
{
	int		fd;
	t_dict	dict;

	dict.head = NULL;
	dict.tail = NULL;
	dict.index = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (write(2, "Error opening file\n", 19), NULL);
	read_file(fd, &dict);
	close(fd);
	*count = dict.index;
	return (dict.head);
}
