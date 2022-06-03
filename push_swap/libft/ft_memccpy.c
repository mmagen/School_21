/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:59:22 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/30 16:59:24 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = dst;
	s = (unsigned char *)src;
	i = 0;
	while (i != n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((void *)d + i + 1);
		i++;
	}
	return (NULL);
}
