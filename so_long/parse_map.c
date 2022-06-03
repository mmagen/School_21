/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:20:08 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/15 15:08:01 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = malloc(sizeof(char) * (i + 1));
	if (s2)
	{
		i = 0;
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	else
		return (NULL);
}

int	open_file(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_errors(1);
	return (fd);
}

int	count_str(char *path)
{
	int		i;
	int		res;
	int		fd;
	char	*line;

	fd = open_file(path);
	res = 0;
	i = get_next_line(fd, &line);
	while (i)
	{
		free(line);
		i = get_next_line(fd, &line);
		res++;
	}
	res++;
	free(line);
	return (res);
}

t_map	parse_map(char *path)
{
	static t_map	map;
	int				fd;
	int				i;
	int				k;

	map.cnt = count_str(path);
	map.map = malloc(sizeof(char *) * (map.cnt + 1));
	if (!map.map)
		ft_errors(1);
	fd = open_file(path);
	k = 0;
	i = get_next_line(fd, &map.map[k]);
	if (i < 0)
		ft_errors(1);
	while (i)
	{
		i = get_next_line(fd, &map.map[++k]);
		if (i < 0)
			ft_errors(1);
	}
	map.map[++k] = 0;
	map.height = get_height(map);
	map.width = get_width(map);
	return (map);
}
