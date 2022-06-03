#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	q;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			q = i;
			while (haystack[q] == needle[j] && q < len)
			{
				q++;
				j++;
				if (j == ft_strlen(needle))
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
