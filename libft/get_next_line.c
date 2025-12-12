/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:11:19 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/26 19:51:36 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free_strjoin(char *saved_line, char *tmp)
{
	char	*new_str;

	if (!saved_line)
	{
		saved_line = ft_strdup("");
		if (!saved_line)
			return (NULL);
	}
	new_str = ft_strjoin(saved_line, tmp);
	free(saved_line);
	return (new_str);
}

static char	*read_line(int fd, char *saved_line)
{
	char	*tmp;
	ssize_t	bytes_read;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp)
		return (free(saved_line), NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, tmp, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(tmp), free(saved_line), NULL);
		if (bytes_read == 0)
			break ;
		tmp[bytes_read] = '\0';
		saved_line = ft_free_strjoin(saved_line, tmp);
		if (!saved_line)
			return ((free(tmp)), NULL);
		if (ft_strchr(saved_line, '\n'))
			break ;
	}
	free(tmp);
	return (saved_line);
}

static char	*extract_from(char *saved_line)
{
	char	*line;
	size_t	i;
	int		has_newline;

	i = 0;
	if (!saved_line[i] || !*saved_line)
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
	size_t	len;

	if (!saved_line)
		return (NULL);
	i = 0;
	while (saved_line[i] && saved_line[i] != '\n')
		i++;
	if (!saved_line[i])
		return (free(saved_line), NULL);
	i++;
	len = ft_strlen(saved_line) - i;
	if (len == 0)
		return (free(saved_line), NULL);
	new_saved_line = ft_calloc(len + 1, sizeof(char));
	if (!new_saved_line)
		return (free(saved_line), NULL);
	j = 0;
	while (saved_line[i])
		new_saved_line[j++] = saved_line[i++];
	new_saved_line[j] = '\0';
	free(saved_line);
	return (new_saved_line);
}

char	*get_next_line(int fd)
{
	static char	*saved_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(saved_line), saved_line = NULL, NULL);
	saved_line = read_line(fd, saved_line);
	if (!saved_line)
		return ((saved_line = NULL), NULL);
	line = extract_from(saved_line);
	if (!line)
		return (free(saved_line), saved_line = NULL, NULL);
	saved_line = remove_line_from(saved_line);
	return (line);
}

/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);

	if (fd < 0)
		return 1;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close (fd);
	return 0;
}
*/
