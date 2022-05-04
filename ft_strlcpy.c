#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;

    i = 0;

    if (size == 0)
        return(ft_strlen(src))
        
    while (src[i] && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }

    dst[i] = '\0';
    return (ft_strlen(src));
}