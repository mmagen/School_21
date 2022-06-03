#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*t;

	t = b;
	i = 0;
	while (i != len)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
