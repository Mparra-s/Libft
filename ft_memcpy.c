#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int		i;
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < (unsigned int)size)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

