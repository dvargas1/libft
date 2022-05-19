#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (!d && !s)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
