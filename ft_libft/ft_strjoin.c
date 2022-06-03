#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*s;

	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s)
	{
		len1 = 0;
		len2 = 0;
		while (s1[len1])
		{
			s[len1] = s1[len1];
			len1++;
		}
		while (s2[len2])
		{
			s[len1] = s2[len2];
			len1++;
			len2++;
		}
		s[len1] = '\0';
		return (s);
	}
	else
		return (NULL);
}
