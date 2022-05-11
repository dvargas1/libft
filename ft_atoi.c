#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	size_t		mult;
	size_t		nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v' || str[i] == '+')
		i++;
    while (str[i] == '-')
    {
        if (str[i] == '-')
		{
            mult *= -1;
		}
            i++;
    }
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}