#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;

        if (n == 0)
            return (0);

    while (str1[i] && str2[i])
    {
        if (str1[i] != str2[i] || i >= n)
        return (str1[i] - str2[i]);
        i++;
    }
    
        return (str1[i] - str2[i]);
}
