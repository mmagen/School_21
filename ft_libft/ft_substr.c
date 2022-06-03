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
