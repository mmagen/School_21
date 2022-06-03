#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = malloc(sizeof(t_list *));
	if (!a)
		return (NULL);
	a->content = content;
	a->next = 0;
	return (a);
}
