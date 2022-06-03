/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:00:36 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/30 17:00:37 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		begin;
	int		end;

	i = 0;
	begin = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[begin] && ft_charinset(s1[begin], set))
		begin++;
	while (end > begin && ft_charinset(s1[end - 1], set))
		end--;
	s = malloc(sizeof(char) * (end - begin + 1));
	if (s)
	{
		while (begin < end)
			s[i++] = s1[begin++];
		s[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}
