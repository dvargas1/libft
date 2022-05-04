#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    c += 32;
    return (c);
}

int main()
{
    int var1 = 'Z';
    printf("%c", ft_tolower(var1));
}