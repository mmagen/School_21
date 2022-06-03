#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	return (NULL);
}
