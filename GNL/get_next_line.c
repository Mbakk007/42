/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:11:19 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/25 11:22:37 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_line(int fd, char *saved_line);
static char	*extract_from(char *saved_line);
static char	*remove_line_from(char *saved_line);
static char	*ft_free_strjoin(char *s1, char *s2);

char	*get_next_line(int fd)
{
	static char	*saved_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (saved_line)
		{
			free(saved_line);
			saved_line = NULL;
		}
		return (NULL);
	}
	saved_line = read_line(fd, saved_line);
	if (!saved_line)
		return (NULL);
	line = extract_from(saved_line);
	saved_line = remove_line_from(saved_line);
	return (line);
}

static char	*read_line(int fd, char *saved_line)
{
	char	*tmp;
	ssize_t	bytes_read;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, tmp, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(tmp);
			free(saved_line);
			return (NULL);
		}
		if (bytes_read == 0)
			break ;
		tmp[bytes_read] = '\0';
		saved_line = ft_free_strjoin(saved_line, tmp);
		if (ft_strchr(saved_line, '\n'))
			break ;
	}
	free(tmp);
	return (saved_line);
}

static char	*ft_free_strjoin(char *saved_line, char *tmp)
{
	char	*new_str;

	if (!saved_line)
		saved_line = ft_strdup("");
	new_str = ft_strjoin(saved_line, tmp);
	free(saved_line);
	return (new_str);
}

static char	*extract_from(char *saved_line)
{
	char	*line;
	size_t	i;
	int		has_newline;

	i = 0;
	if (!saved_line[i])
		return (NULL);
	while (saved_line[i] && saved_line[i] != '\n')
		i++;
	has_newline = (saved_line[i] == '\n');
	line = ft_calloc(i + has_newline + 1, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (saved_line[i] && saved_line[i] != '\n')
	{
		line[i] = saved_line[i];
		i++;
	}
	if (has_newline)
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*remove_line_from(char *saved_line)
{
	char	*new_saved_line;
	size_t	i;
	size_t	j;

	i = 0;
	while (saved_line[i] && saved_line[i] != '\n')
		i++;
	if (!saved_line[i])
	{
		free(saved_line);
		return (NULL);
	}
	new_saved_line = ft_calloc(ft_strlen(saved_line) - i + 1, sizeof(char));
	if (!new_saved_line)
		return (NULL);
	i++;
	j = 0;
	while (saved_line[i])
		new_saved_line[j++] = saved_line[i++];
	new_saved_line[j] = '\0';
	free(saved_line);
	return (new_saved_line);
}
