#include "ft_printf.h"

int	ft_len(int n)
{
	long	len;
	long	q;

	q = n;
	len = 0;
	if (q == 0)
		return (1);
	if (q < 0)
	{
		q = q * -1;
		len++;
	}
	while (q > 0)
	{
		q = q / 10;
		len++;
	}
	return (len);
}

char	*ft_s(int n, unsigned int k, char *s, int i)
{
	if (n == 0)
	{
		s[0] = 48;
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		k = -n;
	}
	else
		k = n;
	while (k > 0)
	{
		s[i--] = 48 + (k % 10);
		k /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	k;
	int				i;

	k = 0;
	i = ft_len(n);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	return (ft_s(n, k, s, i));
}
