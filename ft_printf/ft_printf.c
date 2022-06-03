#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			length;
	t_params	params;

	length = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			start_params(&params);
			format = read_flags(format, &params, args);
			if (!*format)
				return (length);
			length += print_specs(format, &params, args);
		}
		else
			length += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (length);
}

char	*read_perc(const char *format, t_params *params, va_list args)
{
	params->percision = 0;
	format++;
	if (*format >= '0' && *format <= '9')
	{
		while (*format >= '0' && *format <= '9')
			params->percision = params->percision * 10 + (*format++ - '0');
		format--;
	}
	else if (*format == '*' && !params->percision)
		params->percision = va_arg(args, int);
	if (*format == 's' || *format == 'd' || *format == 'i' \
	|| *format == 'u' || *format == 'x' || *format == 'X' || *format == 'p')
		format--;
	return ((char *)format);
}

void	read_star(t_params *params, va_list args)
{
	int	a;

	a = va_arg(args, int);
	params->width = a;
	if (a < 0)
	{
		params->width = (-1) * a;
		params->minus = 1;
	}
}

char	*read_flags(const char *format, t_params *params, va_list args)
{
	format++;
	while (*format == '*' || *format == '-' || *format == '.' \
	|| (*format >= '0' && *format <= '9'))
	{
		if (*format == '-')
			params->minus = 1;
		else if (*format == '0' && params->minus == 0)
			params->zero = 1;
		else if (*format >= '1' && *format <= '9')
		{
			while (*format >= '0' && *format <= '9')
				params->width = params->width * 10 + (*format++ - '0');
			format--;
		}
		else if (*format == '.')
			format = read_perc(format, params, args);
		else if (*format == '*')
			read_star(params, args);
		format++;
	}
	return ((char *)format);
}

int	print_specs(const char *format, t_params *params, va_list args)
{
	int	length;

	length = 0;
	params->type = *format++;
	if (params->type == 'c' || params->type == '%')
		print_char(args, params, &length);
	else if (params->type == 's')
		print_str(args, params, &length);
	else if (params->type == 'p')
		print_point(args, params, &length);
	if (params->type == 'd' || params->type == 'i')
		print_int(args, params, &length);
	else if (params->type == 'u')
		print_unsigned(args, params, &length);
	else if (params->type == 'X' || params->type == 'x')
		print_hex(args, params, &length);
	return (length);
}
