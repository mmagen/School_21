/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:00:07 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/30 17:00:09 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			len_dst;
	size_t			len_src;
	size_t			sum;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	sum = len_dst + len_src;
	if (dstsize > len_dst + 1)
	{
		while (--dstsize - len_dst && src[i])
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
	if (len_dst > dstsize)
		return (dstsize + len_src);
	else
		return (sum);
}
