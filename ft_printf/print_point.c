#include "ft_printf.h"

static int	print_for_zero(t_params *params, int length)
{
	if (params->minus == 0 && params->width > 2)
		length += print_space(params, 2);
	write(1, "0x", 2);
	length += 2;
	if (params->minus == 1 && params->width > 2)
		length += print_space(params, 2);
	return (length);
}

static int	ft_printadr(unsigned long p, int length, t_params *params)
{
	char	*hex_num;
	int		len;	

	if (params->percision == 0 && p == 0)
	{
		length += print_for_zero(params, length);
		return (length);
	}
	hex_num = hex_mod(p);
	len = ft_strlen(hex_num) + 2;
	if (params->minus == 0 && params->width - len > 0)
		length += print_space(params, len);
	write(1, "0x", 2);
	length += 2;
	write (1, hex_num, len - 2);
	length += len - 2;
	if (hex_num)
		free(hex_num);
	if (params->minus == 1 && params->width - len > 0)
		length += print_space(params, len);
	return (length);
}

int	print_point(va_list args, t_params *params, int *length)
{
	unsigned long	p;

	p = va_arg(args, unsigned long);
	*length += ft_printadr(p, *length, params);
	return (*length);
}
