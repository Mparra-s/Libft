#include "libft.h"

void	ft_bzero(void *src, size_t size)
{
	unsigned char	*csrc;
	size_t			i;

	csrc = (unsigned char *) src;
	i = 0;
	while (i < size)
	{
		csrc[i] = '\0';
		i++;
	}
}
