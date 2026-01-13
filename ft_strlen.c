#include "libft.h"

int	ft_strlen(const char *str)
{
	int	letters;

	letters = 0;
	while (*str != '\0')
	{
		letters++;
		str = str + 1;
	}
	return (letters);
}
