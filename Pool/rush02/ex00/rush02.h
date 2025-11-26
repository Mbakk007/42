/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <sllabres@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:53:51 by sllabres          #+#    #+#             */
/*   Updated: 2025/10/26 12:54:20 by sllabres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>

# define MAX_LINE_SIZE 1024
# define MAX_DICT_SIZE 1024

typedef struct s_store
{
	char			*num;
	char			*value;
	struct s_store	*next;
}	t_store;

typedef struct s_dict
{
	t_store	*head;
	t_store	*tail;
	int		index;
}	t_dict;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*trim(char *str);
char	*ft_strdup(char *src);
t_store	*find_in_dict(t_store *dict, char *num);
void	print_word(char *word);
int		ft_atoi(char *str);
int		is_valid_number(char *number);

void	add_to_dict(t_dict *dict, char *num, char *value);
void	ft_line(t_dict *dict, char *line);
void	process_line(char *line);
t_store	*parse(const char *path, int *count);

void	print_hundreds(int n, t_store *dict);
void	convert_number(char *number, t_store *dict);

#endif
