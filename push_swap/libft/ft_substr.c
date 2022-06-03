/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:00:39 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/30 17:00:40 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;
	size_t		st;

	i = 0;
	st = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub)
	{
		while (s[i])
		{
			if (i >= start && st < len)
			{
				sub[st] = s[i];
				st++;
			}
			i++;
		}
		sub[st] = '\0';
		return (sub);
	}
	else
		return (NULL);
}
