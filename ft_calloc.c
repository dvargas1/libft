#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*space;

	space = malloc (nitems * size);
	if (!space)
		return (NULL);
	else if (nitems == 0)
		nitems = 1;
	else if (size == 0)
		size = 1;
	ft_bzero (space, nitems);
	return (space);
}
