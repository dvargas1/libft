#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;
    char *temp;

    i = 0;

    while (str[i])
    {
        if (str[i] == (unsigned char) c)
            temp = ((char*)(str + i));
        if (str[i] == '\0')
            break;
        i++;
    }
    return (temp);
}
