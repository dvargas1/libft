#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    const unsigned char *s1;
    const unsigned char *s2;

    i = 0;
    s1 = str1;
    s2 = str2;

    while (s1[i] && s2[i])
    {
        if(s1[i] != s2[i] || i < (n - 1))
        {
            return (s1[i] - s2[i]);
            i++;
        }
    }
    return(s1[i] - s2[i]);
}
