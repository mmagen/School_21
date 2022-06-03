#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (0);
	if (s >= d)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
