/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:19:54 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/14 15:19:55 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/get_next_line.h"

int	ft_strlens(const char *s)
{
	int			i;

	i = 0;
	while (s && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strchrs(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlens(s) + 1 ;
	i = 0;
	while (len--)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

int	is_n(char *s)
{
	if (!s)
		return (0);
	if (ft_strchrs(s, '\n'))
		return (1);
	return (0);
}

char	*ft_strjoins(char const *s1, char const *s2)
{
	char	*s;
	char	*q;

	s = malloc(sizeof(char) * (ft_strlens(s1) + ft_strlens(s2) + 1));
	q = s;
	if (s)
	{
		while (s1 && *s1)
		{
			*s = *s1;
			s++;
			s1++;
		}
		while (*s2)
		{
			*s = *s2;
			s++;
			s2++;
		}
		*s = '\0';
		return (q);
	}
	else
		return (NULL);
}

char	*ft_strdups(const char *s1)
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
