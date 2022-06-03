#include "ft_printf.h"

int	print_zero(t_params *params, int str_len)
{
	int	i;

	i = 1;
	while (((params->width--) - str_len) > 0 && i++)
		write(1, "0", 1);
	return (i - 1);
}

int	for_space(int actlen, int len, int length, t_params *params)
{
	length = 0;
	if (actlen > len - 1)
		length += print_space(params, actlen + 1);
	if (actlen <= len - 1)
		length += print_space(params, len);
	return (length);
}

int	print_zero_percision(t_params *params, int str_len)
{
	int	i;

	i = 0;
	while (((params->percision--) - str_len) > 0 )
	{
		write(1, "0", 1);
		i++;
	}
	return (i);
}

static int	print_perc(char *num, int len, int length, t_params *params)
{
	int	actlen;
	int	width;

	width = params->width;
	actlen = params->percision;
	if (width - actlen > 0 && params->minus == 0)
	{
		if (actlen > len)
			length += print_space(params, actlen);
		if (actlen <= len)
			length += print_space(params, len);
	}
	if (actlen - len > 0)
		length += print_zero_percision(params, len);
	write (1, num, len);
	length += len;
	if (width - actlen > 0 && params->minus == 1)
	{
		if (actlen > len)
			length += print_space(params, actlen);
		if (actlen <= len)
			length += print_space(params, len);
	}
	return (length);
}

int	print_plus(char *numb, int str_len, int length, t_params *params)
{
	if (params->percision < 0)
	{
		if (params->width - str_len > 0 && params->minus == 0)
		{
			if (params->zero == 0)
				length += print_space(params, str_len);
			else
				length += print_zero(params, str_len);
		}
		write(1, numb, str_len);
		length += str_len;
		if (params->width - str_len > 0 && params->minus == 1)
			length += print_space(params, str_len);
	}
	else
		length += print_perc(numb, str_len, length, params);
	return (length);
}
