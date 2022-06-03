#include "ft_printf.h"

static int	p_numb(char *num)
{
	int	i;

	i = 0;
	while (*num)
	{
		write(1, num++, 1);
		i++;
	}
	return (i);
}

int	print_percision(char *numb, int str_len, int length, t_params *params)
{
	int	actlen;
	int	width;

	width = params->width;
	actlen = params->percision;
	if (width - actlen + 2 > 0 && params->minus == 0)
		length += for_space(actlen, str_len, length, params);
	if (actlen - str_len >= 0)
	{
		params->sign = 0;
		write(1, "-", 1);
		length++;
		length += print_zero_percision(params, str_len - 1);
	}
	if (params->sign)
	{
		write(1, "-", 1);
		length += p_numb(numb) + 1;
	}
	else
		length += p_numb(numb);
	if (width - actlen + 2 > 0 && params->minus == 1)
		length += for_space(actlen, str_len, length, params);
	return (length);
}

int	if_sign(t_params *params, char *numb)
{
	int	a;

	a = 0;
	if (params->sign)
	{
		write(1, "-", 1);
		a += p_numb(numb) + 1;
	}
	else
		a += p_numb(numb);
	return (a);
}

int	print_min(char *numb, int str_len, int length, t_params *params)
{
	if (params->percision < 0)
	{
		if (params->width - str_len > 0 && params->minus == 0)
		{
			if (params->zero == 0)
				length += print_space(params, str_len);
			else
			{
				params->sign = 0;
				write(1, "-", 1);
				length++;
				length += print_zero(params, str_len);
			}
		}
		length += if_sign(params, numb);
		if (params->width - str_len > 0 && params->minus == 1)
			length += print_space(params, str_len);
	}
	else
		length += print_percision(numb, str_len, length, params);
	return (length);
}
