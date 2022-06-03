#include "ft_printf.h"

int	print_int(va_list args, t_params *params, int *length)
{
	char	*numb;
	int		str_len;

	numb = ft_itoa(va_arg(args, int));
	if (!numb)
		return (-1);
	if (*numb == '0' && params->percision == 0)
		*length += print_space(params, 0);
	else if (*numb == '-')
	{
		str_len = ft_strlen(numb);
		params->sign = 1;
		*length += print_min(numb + 1, str_len, *length, params);
	}
	else
		*length += print_plus(numb, ft_strlen(numb), *length, params);
	free(numb);
	return (*length);
}

int	print_space(t_params *params, int len)
{
	int	i;

	i = 1;
	while (((params->width--) - len) > 0 && i++)
		write(1, " ", 1);
	return (i - 1);
}
