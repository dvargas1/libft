#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *d;
    const unsigned char *s;
    unsigned char *temp;

    i = 0;
    d = dest;
    s = src;

    if (!d && !s)
		return (0);

    while (s[i])
        {
            temp[i] = s[i];
            i++;
        }
    
        // i = 0;

        // while(n > i)
        // {
        //     d[i] = temp[i];
        //     n--;
        // }

    return (temp);
}


#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "aaaaaaaaaaaaaaaa";
   const char src[]  = "1234567891";


   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 4);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}