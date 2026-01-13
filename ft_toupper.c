#include "libft.h"

int	ft_toupper(int letter)
{
	unsigned char	c;

	c = (unsigned char)letter;
	if (c > 96 && c < 123)
	{
		c = c - 32;
		return (c);
	}
	else
		return (letter);
}
