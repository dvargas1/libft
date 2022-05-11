#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    char *space;

    space = malloc (nitems * size);
    if (!space)
        return(NULL);
    ft_bzero(space, nitems);
    return (space);
}
