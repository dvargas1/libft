#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    c -= 32;
    return (c);
}

int main()
{
    int var1 = 'z';
    printf("%c", ft_toupper(var1));
}