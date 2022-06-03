#include "ft_printf.h"

static int	ft_l(unsigned int n)
{
	long			len;
	unsigned int	q;

	q = n;
	len = 0;
	if (q == 0)
		return (1);
	while (q > 0)
	{
		q = q / 10;
		len++;
	}
	return (len);
}

static char	*uns_itoa(unsigned int n)
{
	int		len;
	char	*s;

	len = ft_l(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	*(s + len--) = '\0';
	while (len)
	{
		*(s + len) = n % 10 + '0';
		n /= 10;
		len--;
	}
	*s = n + '0';
	return (s);
}

int	print_unsigned(va_list args, t_params *params, int *length)
{
	char			*num;
	unsigned int	number;
	int				len;

	number = va_arg(args, unsigned int);
	num = uns_itoa(number);
	if (!num)
		return (-1);
	len = ft_strlen(num);
	if (*num == '0' && params->percision == 0)
		*length += print_space(params, 0);
	else
		*length += print_plus(num, len, *length, params);
	free(num);
	return (*length);
}
