#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int			i;

	i = 0;
	while (s && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s) + 1 ;
	i = 0;
	while (len--)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

int	is_n(char *s)
{
	if (!s)
		return (0);
	if (ft_strchr(s, '\n'))
		return (1);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*q;

	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	q = s;
	if (s)
	{
		while (s1 && *s1)
		{
			*s = *s1;
			s++;
			s1++;
		}
		while (*s2)
		{
			*s = *s2;
			s++;
			s2++;
		}
		*s = '\0';
		return (q);
	}
	else
		return (NULL);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = malloc(sizeof(char) * (i + 1));
	if (s2)
	{
		i = 0;
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	else
		return (NULL);
}
