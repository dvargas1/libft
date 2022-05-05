#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    const unsigned char *s;

    i=0;
    s=str;

    while (i < n)
    {
        if (s[i] == (unsigned char)c)
            return (((unsigned char *)str) + i);
        i++;
    }

    return(0);

}
