#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (mem)
		return (ft_memset(mem, 0, count * size));
	else
		return (NULL);
}
