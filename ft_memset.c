#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = str;
	while (n)
	{
		s[i] = c;
		i++;
		n--;
	}
	return (s);
}
