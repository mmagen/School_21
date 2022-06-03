#include "ft_printf.h"

int	print_c(char c, int fd, int mod)
{
	if (mod == 1)
	{
		write(fd, &c, 1);
		return (1);
	}
	else if (!mod)
		return (1);
	else if (mod == -1)
		write(fd, &c, 1);
	return (0);
}

static void	if_minus(char c, t_params *params)
{
	write(1, &c, 1);
	while (--params->width > 0)
		print_c(' ', 1, -1);
}

static void	if_not_minus(char c, t_params *params)
{
	char	flag;

	flag = ' ';
	if (params->zero)
		flag = '0';
	while (params->width-- > 1)
		print_c(flag, 1, -1);
	write(1, &c, 1);
}

void	print_char(va_list args, t_params *params, int *length)
{
	char	c;

	if (params->type == '%')
		c = '%';
	else
		c = va_arg(args, int);
	if (!params->width)
	{
		*length += print_c(c, 1, 1);
		return ;
	}
	else if (params->width < 0)
	{
		params->minus = 1;
		params->zero = 0;
		params->width = -1 * params->width;
	}
	*length += params->width;
	if (params->minus)
		if_minus(c, params);
	else
		if_not_minus(c, params);
}

void	start_params(t_params *params)
{
	params->type = 0;
	params->width = 0;
	params->minus = 0;
	params->zero = 0;
	params->percision = -1;
	params->sign = 0;
}
