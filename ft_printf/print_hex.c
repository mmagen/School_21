#include "ft_printf.h"

char	ft_convert_H(unsigned int n)
{
	int	a;

	a = n % 16;
	if (a == 10)
		return ('A');
	if (a == 11)
		return ('B');
	if (a == 12)
		return ('C');
	if (a == 13)
		return ('D');
	if (a == 14)
		return ('E');
	if (a == 15)
		return ('F');
	return (0);
}

int	ft_l(unsigned int n)
{
	long			len;
	unsigned int	q;

	q = n;
	len = 0;
	if (q == 0)
		return (1);
	while (q > 0)
	{
		q = q / 16;
		len++;
	}
	return (len);
}

char	*hex_low(unsigned int n)
{
	char	*hex;
	int		count;

	count = ft_l(n);
	hex = malloc(sizeof(char) * (count + 1));
	if (hex == NULL)
		return (NULL);
	*(hex + count) = '\0';
	count--;
	while (count)
	{
		if (n % 16 >= 10)
			*(hex + count) = ft_convert_L(n);
		else
			*(hex + count) = n % 16 + '0';
		n /= 16;
		count--;
	}
	if (n >= 10)
		*hex = ft_convert_L(n);
	else
		*hex = n + '0';
	return (hex);
}

char	*hex_hight(unsigned int n)
{
	char	*hex;
	int		count;

	count = ft_l(n);
	hex = malloc(sizeof(char) * (count + 1));
	if (hex == NULL)
		return (NULL);
	*(hex + count) = '\0';
	count--;
	while (count)
	{
		if (n % 16 >= 10)
			*(hex + count) = ft_convert_H(n);
		else
			*(hex + count) = n % 16 + '0';
		n /= 16;
		count--;
	}
	if (n >= 10)
		*hex = ft_convert_H(n);
	else
		*hex = n + '0';
	return (hex);
}

int	print_hex(va_list args, t_params *params, int *length)
{
	unsigned int	number;
	char			*n;
	int				len;

	number = va_arg(args, unsigned int);
	if (params->type == 'x')
	{
		n = hex_low(number);
		if (n == NULL)
			return (-1);
	}
	if (params->type == 'X')
	{
		n = hex_hight(number);
		if (n == NULL)
			return (-1);
	}
	len = ft_strlen(n);
	if (*n == '0' && params->percision == 0)
		*length += print_space(params, 0);
	else
		*length += print_plus(n, len, *length, params);
	free(n);
	return (*length);
}
