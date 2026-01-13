#include "libft.h"

int	ft_tolower(int letter)
{
	unsigned char	c;

	c = (unsigned char)letter;
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return (c);
	}
	else
		return (letter);
}
