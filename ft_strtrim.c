#include "libft.h"

int ft_inset(char c, char const *set)
{
    size_t i;

    i = 0;
    while (set[i] && set[i] != c)
    {
        i++;
    }
    if (set[i] == c)
		return(1);
    return (0);
}

char *ft_strtrim (char const *s1, char const *set)
{
    char* trim;
    size_t i;
    size_t j;

	if (!s1)
		return (NULL);
	if(!set)
		return((char *)s1);
    j = ft_strlen(s1);
    i = 0;
    while(s1[i] && ft_inset(s1[i],set))
            i++;
    while(ft_inset(s1[j - 1], set) && i <= j)
            j--;
	if (i >= j)
		return (ft_strdup(""));
    trim = ft_substr(s1, i, j - i);
    return (trim);
}
