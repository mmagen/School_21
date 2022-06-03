#include "ft_printf.h"

char	ft_convert_L(unsigned int num)
{
	int	a;

	a = num % 16;
	if (a == 10)
		return ('a');
	if (a == 11)
		return ('b');
	if (a == 12)
		return ('c');
	if (a == 13)
		return ('d');
	if (a == 14)
		return ('e');
	if (a == 15)
		return ('f');
	return (0);
}

static int	ft_count(unsigned long adr)
{
	int	count;

	count = 0;
	if (adr == 0)
		return (1);
	while (adr)
	{
		adr /= 16;
		count++;
	}
	return (count);
}

char	*hex_mod(unsigned long adr)
{
	char	*hex_numb;
	int		count;

	count = ft_count(adr);
	hex_numb = malloc(sizeof(char) * (count + 1));
	if (!hex_numb)
		return (NULL);
	*(hex_numb + count) = '\0';
	count--;
	while (count)
	{
		if (adr % 16 >= 10)
			*(hex_numb + count) = ft_convert_L(adr);
		else
			*(hex_numb + count) = adr % 16 + '0';
		adr /= 16;
		count--;
	}
	if (adr >= 10)
		*hex_numb = ft_convert_L(adr);
	else
		*hex_numb = adr + '0';
	return (hex_numb);
}
