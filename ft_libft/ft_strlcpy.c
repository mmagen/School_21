#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*s;
	size_t			i;
	size_t			len;

	s = (unsigned char *)src;
	len = ft_strlen((const char *)s);
	i = 0;
	if (dstsize <= 0)
		return (len);
	while ((--dstsize) && s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
