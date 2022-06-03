#include "ft_printf.h"

int	print_str(va_list args, t_params *params, int *length)
{
	char	*c;
	int		len;

	c = va_arg(args, char *);
	if (c == NULL)
		c = "(null)";
	len = ft_strlen(c);
	if (params->percision < len && params->percision >= 0)
		len = params->percision;
	if ((params->width - len) > 0 && params->minus == 0)
		*length += print_space(params, len);
	write(1, c, len);
	*length += len;
	if (params->minus == 1)
		*length += print_space(params, len);
	return (*length);
}
