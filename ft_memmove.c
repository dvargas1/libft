#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = dest;
    s = src;

    if (!d && !s)
		return (NULL);

    if (s <= d)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
        ft_memcpy(dest, src, n);

    return (d);
}