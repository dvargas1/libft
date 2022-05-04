#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    int i;
    unsigned char *s;

    i = 0;
    s = str;
    
    while (n > i)
    {
        s[i] = c;
        i++;
    }
    return (str);
}