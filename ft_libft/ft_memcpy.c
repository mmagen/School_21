#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i !=n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
