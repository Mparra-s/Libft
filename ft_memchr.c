#include "libft.h"

void	*ft_memchr(const void *scr, int c, size_t len)
{
	unsigned char	letter;
	unsigned char	*cscr;
	size_t			i;

	letter = (unsigned char) c;
	cscr = (unsigned char *) scr;
	i = 0;
	while (i < len)
	{
		if (cscr[i] == letter)
		{
			return ((void *)&cscr[i]);
		}
		i++;
	}
	return (NULL);
}
