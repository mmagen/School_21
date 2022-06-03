#include "libft.h"

int	ft_freemem(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		free(&s[i]);
		i++;
	}
	free(s);
	return (1);
}

int	ft_nbstrs(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb++;
	return (nb);
}

void	ft_nextstr(char **next, int	*len, char c)
{
	int		i;

	*next += *len;
	*len = 0;
	i = 0;
	while (**next && **next == c)
		(*next)++;
	while ((*next)[i])
	{
		if ((*next)[i] == c)
			return ;
		(*len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*next;
	int		len;
	int		i;

	if (!(*s))
		return (ft_calloc(1, sizeof(char *) * 1));
	next = (char *)s;
	len = 0;
	i = 0;
	split = malloc(sizeof(char *) * (ft_nbstrs(s, c) + 1));
	if (!split)
		return (NULL);
	while (i < ft_nbstrs(s, c))
	{
		ft_nextstr(&next, &len, c);
		split[i] = malloc(sizeof(char) * (len + 1));
		if (!split[i] && ft_freemem(*split))
			return (0);
		ft_strlcpy(split[i], next, len + 1);
		i++;
	}
	split[i] = NULL;
	return (split);
}
