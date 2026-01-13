#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	int				i;

	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (cdest > csrc && cdest < csrc + size)
	{
		while (size--)
			cdest[size] = csrc[size];
	}
	else
	{
		while (size--)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (cdest);
}

