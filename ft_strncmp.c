#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;

        if (n == 0)
            return (0);

    while (str1[i] && str2[i])
    {
        if (str1[i] != str2[i] || i >= n - 1)
        return (str1[i] - str2[i]);
        i++;
    }
    
        return (str1[i] - str2[i]);
}
// n - 1 para tirarmos a comparação do nulo.