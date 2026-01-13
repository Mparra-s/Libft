#include "libft.h"

void	ft_striteri(char *str, void (*fun)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		fun(i, &str[i]);
		i++;
	}
}
